#!/usr/bin/expect -f

spawn ./phonebook

for {set i 0} {$i < 8} {incr i} {
    expect "Faites un choix 'ADD', 'SEARCH', 'EXIT' :"
    send "ADD\r"

    expect "Entrez vos informations :"
    expect "Entrez votre Prenom :"
    send "prenom$i\r"

    expect "Entrez votre Nom :"
    send "nom$i\r"

    expect "Entrez votre nickname :"
    send "surnom$i\r"

    expect "Entrez votre Numero :"
    send "numero$i\r"

    expect "Entrez votre Secret :"
    send "secret_phrase$i\r"
}

expect "Faites un choix 'ADD', 'SEARCH', 'EXIT' :"
send "SEARCH\r"