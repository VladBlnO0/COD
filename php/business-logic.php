#!/usr/bin/php

<?php

function validate($balance, $amount)
{
    if ($amount <= 0.0) {
        return false;
    }
    if ($amount >= $balance) {
        return false;
    }
    return true;
}

function deposit($balance, $percentage, $years)
{
    if ($balance <= 0.0 || $percentage <= 0.0 || $years <= 0) {
        return $balance;
    }
    for ($i = 0; $i < $years; $i++) {
        $interest = ($balance * $percentage) / 100;
        $balance += $interest;
    }
    return round($balance * 100) / 100;
}

function transaction($senderCard, $receiverBalance, $amount)
{
    echo "Received: $amount \n";
    echo "From: $senderCard \n";
    echo "Balance now: " . ($receiverBalance + $amount) . "\n";
}

function main()
{
    $balance = 1000.0;
    $amount = 250.0;
    $years = 3;

    $ok = validate($balance, $amount);
    echo "Transaction valid? " . ($ok ? "Yes" : "No") . "\n";

    $newBalance = deposit($balance, 2.5, $years);
    echo "Balance after " . $years . " years = " . $newBalance . "\n";

    $str = "4242 4242 4242 4242";
    transaction($str, $balance, 10.5);

    return 0;
}

main();

?>