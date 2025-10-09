from fpdf import FPDF

pdf = FPDF(orientation='P', unit='mm', format='A4')
pdf.add_page()

pdf.add_font("dejavu-sans", style="", fname="font/DejaVuSans.ttf", uni=True)
pdf.set_font(family="dejavu-sans", style="", size=18)
pdf.ln(8)

pdf.multi_cell(0, 10, "Hello World", ln=True, align='C')

pdf.image("logo.png", x=60, y=None, w=90) 

headers = ["column header 1", "column header 2", "column header 3", "column header 4"]
row_data = ["row 1, col 1", "row 1, col 2", "row 1, col 3", "row 1, col 4"]

col_width = pdf.epw / 4  
row_height = 10

pdf.set_fill_color(200, 200, 200)
for header in headers:
    pdf.cell(col_width, row_height, header, border=1, align='C', fill=True)
pdf.ln(row_height)

for cell in row_data:
    pdf.cell(col_width, row_height, cell, border=1, align='C')
pdf.ln(row_height)

pdf.add_page()

pdf.set_font(family="dejavu-sans", style="", size=14)
paragraph = (
    "   Ідея проєкту полягає в розробці ефективного і безпечного вебзастосування "
    "для дистанційного банківського обслуговування, яке дозволить проводити "
    "фінансові операції онлайн. Основні варіанти використання вебзастосування — "
    "це перегляд інформації про рахунок клієнта, історія транзакцій, управління "
    "персональними даними, переказ коштів, оплата послуг. "
    "Забезпечується шифрування даних для їх безпеки. "
    "Онлайн-чат забезпечує відповідь на запити клієнта."
)
pdf.multi_cell(0, 8, paragraph, align='J')

pdf.output("my_document.pdf")
