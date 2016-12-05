#ifndef BRIDGETRANSLATIONS_H
#define BRIDGETRANSLATIONS_H
#include <QObject>

// Get strings in debug console `dumpStrings()`
// TODO: Automate this process, move into include and generate include...
static const char *html_strings[] = {
QT_TRANSLATE_NOOP("MoneyBridge", "Overview"),
QT_TRANSLATE_NOOP("MoneyBridge", "Wallet"),
QT_TRANSLATE_NOOP("MoneyBridge", "Send"),
QT_TRANSLATE_NOOP("MoneyBridge", "Receive"),
QT_TRANSLATE_NOOP("MoneyBridge", "Transactions"),
QT_TRANSLATE_NOOP("MoneyBridge", "Address Book"),
QT_TRANSLATE_NOOP("MoneyBridge", "Chat"),
QT_TRANSLATE_NOOP("MoneyBridge", "Notifications"),
QT_TRANSLATE_NOOP("MoneyBridge", "Options"),
QT_TRANSLATE_NOOP("MoneyBridge", "Wallet Management"),
QT_TRANSLATE_NOOP("MoneyBridge", "Add New Wallet"),
QT_TRANSLATE_NOOP("MoneyBridge", "Import Wallet"),
QT_TRANSLATE_NOOP("MoneyBridge", "Advanced"),
QT_TRANSLATE_NOOP("MoneyBridge", "Backup"),
QT_TRANSLATE_NOOP("MoneyBridge", "Backup Wallet"),
QT_TRANSLATE_NOOP("MoneyBridge", "Encrypt Wallet"),
QT_TRANSLATE_NOOP("MoneyBridge", "Change Passphrase"),
QT_TRANSLATE_NOOP("MoneyBridge", "(Un)lock Wallet"),
QT_TRANSLATE_NOOP("MoneyBridge", "Tools"),
QT_TRANSLATE_NOOP("MoneyBridge", "Chain Data"),
QT_TRANSLATE_NOOP("MoneyBridge", "Block Explorer"),
QT_TRANSLATE_NOOP("MoneyBridge", "Sign Message"),
QT_TRANSLATE_NOOP("MoneyBridge", "Verify Message"),
QT_TRANSLATE_NOOP("MoneyBridge", "Debug"),
QT_TRANSLATE_NOOP("MoneyBridge", "About Money"),
QT_TRANSLATE_NOOP("MoneyBridge", "About QT"),
QT_TRANSLATE_NOOP("MoneyBridge", "QR code"),
QT_TRANSLATE_NOOP("MoneyBridge", "Address:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Label:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Narration:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Amount:"),
QT_TRANSLATE_NOOP("MoneyBridge", "MONEY"),
QT_TRANSLATE_NOOP("MoneyBridge", "mMONEY"),
QT_TRANSLATE_NOOP("MoneyBridge", "µMONEY"),
QT_TRANSLATE_NOOP("MoneyBridge", "Moneyshi"),
QT_TRANSLATE_NOOP("MoneyBridge", "Add new receive address"),
QT_TRANSLATE_NOOP("MoneyBridge", "Normal"),
QT_TRANSLATE_NOOP("MoneyBridge", "Stealth"),
QT_TRANSLATE_NOOP("MoneyBridge", "BIP32"),
QT_TRANSLATE_NOOP("MoneyBridge", "Add Address"),
QT_TRANSLATE_NOOP("MoneyBridge", "Add a new contact"),
QT_TRANSLATE_NOOP("MoneyBridge", "Address Lookup"),
QT_TRANSLATE_NOOP("MoneyBridge", "Address Type"),
QT_TRANSLATE_NOOP("MoneyBridge", "Group"),
QT_TRANSLATE_NOOP("MoneyBridge", "Label"),
QT_TRANSLATE_NOOP("MoneyBridge", "Address"),
QT_TRANSLATE_NOOP("MoneyBridge", "Public Key"),
QT_TRANSLATE_NOOP("MoneyBridge", "Transaction Hash"),
QT_TRANSLATE_NOOP("MoneyBridge", "Recent Transactions"),
QT_TRANSLATE_NOOP("MoneyBridge", "Market"),
QT_TRANSLATE_NOOP("MoneyBridge", "Advanced Options"),
QT_TRANSLATE_NOOP("MoneyBridge", "Coin Control"),
QT_TRANSLATE_NOOP("MoneyBridge", "Make payment"),
QT_TRANSLATE_NOOP("MoneyBridge", "Balance transfer"),
QT_TRANSLATE_NOOP("MoneyBridge", "Select Inputs"),
QT_TRANSLATE_NOOP("MoneyBridge", "Automatically selected"),
QT_TRANSLATE_NOOP("MoneyBridge", "Quantity:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Fee:"),
QT_TRANSLATE_NOOP("MoneyBridge", "After Fee:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Bytes:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Priority:"),
QT_TRANSLATE_NOOP("MoneyBridge", "LowOutput:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Change:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Custom change address"),
QT_TRANSLATE_NOOP("MoneyBridge", "From account"),
QT_TRANSLATE_NOOP("MoneyBridge", "PUBLIC"),
QT_TRANSLATE_NOOP("MoneyBridge", "PRIVATE"),
QT_TRANSLATE_NOOP("MoneyBridge", "Balance:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Ring Size:"),
QT_TRANSLATE_NOOP("MoneyBridge", "To account"),
QT_TRANSLATE_NOOP("MoneyBridge", "Pay to"),
QT_TRANSLATE_NOOP("MoneyBridge", "Narration"),
QT_TRANSLATE_NOOP("MoneyBridge", "Amount"),
QT_TRANSLATE_NOOP("MoneyBridge", "Default Stealth Address"),
QT_TRANSLATE_NOOP("MoneyBridge", "Add Recipient"),
QT_TRANSLATE_NOOP("MoneyBridge", "Clear All"),
QT_TRANSLATE_NOOP("MoneyBridge", "Suggest Ring Size"),
QT_TRANSLATE_NOOP("MoneyBridge", "Send Payment"),
QT_TRANSLATE_NOOP("MoneyBridge", "RECEIVE"),
QT_TRANSLATE_NOOP("MoneyBridge", "Filter by type.."),
QT_TRANSLATE_NOOP("MoneyBridge", "Type"),
QT_TRANSLATE_NOOP("MoneyBridge", "Show QR Code"),
QT_TRANSLATE_NOOP("MoneyBridge", "New Address"),
QT_TRANSLATE_NOOP("MoneyBridge", "Copy Address"),
QT_TRANSLATE_NOOP("MoneyBridge", "TRANSACTIONS"),
QT_TRANSLATE_NOOP("MoneyBridge", "Date"),
QT_TRANSLATE_NOOP("MoneyBridge", "ADDRESSBOOK"),
QT_TRANSLATE_NOOP("MoneyBridge", "Delete"),
QT_TRANSLATE_NOOP("MoneyBridge", "Start Private Conversation"),
QT_TRANSLATE_NOOP("MoneyBridge", "Name:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Public Key:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Start Conversation"),
QT_TRANSLATE_NOOP("MoneyBridge", "Choose identity"),
QT_TRANSLATE_NOOP("MoneyBridge", "Identity:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Start Group Conversation"),
QT_TRANSLATE_NOOP("MoneyBridge", "Group name:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Create Group"),
QT_TRANSLATE_NOOP("MoneyBridge", "Invite others"),
QT_TRANSLATE_NOOP("MoneyBridge", "Search"),
QT_TRANSLATE_NOOP("MoneyBridge", "Invite others to group"),
QT_TRANSLATE_NOOP("MoneyBridge", "Invite to Group"),
QT_TRANSLATE_NOOP("MoneyBridge", "Invite"),
QT_TRANSLATE_NOOP("MoneyBridge", "GROUP"),
QT_TRANSLATE_NOOP("MoneyBridge", "BOOK"),
QT_TRANSLATE_NOOP("MoneyBridge", "Start private conversation"),
QT_TRANSLATE_NOOP("MoneyBridge", "Start group conversation"),
QT_TRANSLATE_NOOP("MoneyBridge", "CHAT"),
QT_TRANSLATE_NOOP("MoneyBridge", "Leave Group"),
QT_TRANSLATE_NOOP("MoneyBridge", "CHAIN DATA"),
QT_TRANSLATE_NOOP("MoneyBridge", "Coin Value"),
QT_TRANSLATE_NOOP("MoneyBridge", "Owned (Mature)"),
QT_TRANSLATE_NOOP("MoneyBridge", "System (Mature)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Spends"),
QT_TRANSLATE_NOOP("MoneyBridge", "Least Depth"),
QT_TRANSLATE_NOOP("MoneyBridge", "BLOCK EXPLORER"),
QT_TRANSLATE_NOOP("MoneyBridge", "Refresh"),
QT_TRANSLATE_NOOP("MoneyBridge", "Hash"),
QT_TRANSLATE_NOOP("MoneyBridge", "Height"),
QT_TRANSLATE_NOOP("MoneyBridge", "Timestamp"),
QT_TRANSLATE_NOOP("MoneyBridge", "Value Out"),
QT_TRANSLATE_NOOP("MoneyBridge", "OPTIONS"),
QT_TRANSLATE_NOOP("MoneyBridge", "Main"),
QT_TRANSLATE_NOOP("MoneyBridge", "Network"),
QT_TRANSLATE_NOOP("MoneyBridge", "Window"),
QT_TRANSLATE_NOOP("MoneyBridge", "Display"),
QT_TRANSLATE_NOOP("MoneyBridge", "I2P"),
QT_TRANSLATE_NOOP("MoneyBridge", "Tor"),
QT_TRANSLATE_NOOP("MoneyBridge", "Start Money on system login"),
QT_TRANSLATE_NOOP("MoneyBridge", "Detach databases at shutdown"),
QT_TRANSLATE_NOOP("MoneyBridge", "Pay transaction fee:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Optional transaction fee per kB that helps make sure your transactions are processed quickly."),
QT_TRANSLATE_NOOP("MoneyBridge", "Most transactions are 1kB. Fee 0.01 recommended."),
QT_TRANSLATE_NOOP("MoneyBridge", "Enable Staking"),
QT_TRANSLATE_NOOP("MoneyBridge", "Reserve:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Reserved amount does not participate in staking and is therefore spendable at any time."),
QT_TRANSLATE_NOOP("MoneyBridge", "Minimum Stake Interval"),
QT_TRANSLATE_NOOP("MoneyBridge", "Minimum Ring size:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Maximum Ring size:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Automatically select ring size"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enable Secure messaging"),
QT_TRANSLATE_NOOP("MoneyBridge", "Thin Mode (Requires Restart)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Thin Full Index"),
QT_TRANSLATE_NOOP("MoneyBridge", "Thin Index Window"),
QT_TRANSLATE_NOOP("MoneyBridge", "Map port using UPnP"),
QT_TRANSLATE_NOOP("MoneyBridge", "Connect through SOCKS proxy:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Details"),
QT_TRANSLATE_NOOP("MoneyBridge", "Proxy IP:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Port:"),
QT_TRANSLATE_NOOP("MoneyBridge", "SOCKS Version:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Minimize to the tray instead of the taskbar"),
QT_TRANSLATE_NOOP("MoneyBridge", "Minimize on close"),
QT_TRANSLATE_NOOP("MoneyBridge", "User Interface language:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Unit to show amounts in:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Rows per page:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Display addresses in transaction list"),
QT_TRANSLATE_NOOP("MoneyBridge", "Notifications:"),
QT_TRANSLATE_NOOP("MoneyBridge", "Visible Transaction Types:"),
QT_TRANSLATE_NOOP("MoneyBridge", "I2P (coming soon)"),
QT_TRANSLATE_NOOP("MoneyBridge", "TOR (coming soon)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Cancel"),
QT_TRANSLATE_NOOP("MoneyBridge", "Apply"),
QT_TRANSLATE_NOOP("MoneyBridge", "Ok"),
QT_TRANSLATE_NOOP("MoneyBridge", "Lets create a New Wallet and Account to get you started!"),
QT_TRANSLATE_NOOP("MoneyBridge", "Wallet Name"),
QT_TRANSLATE_NOOP("MoneyBridge", "Password"),
QT_TRANSLATE_NOOP("MoneyBridge", "Add an optional Password to secure the Recovery Phrase (shown on next page)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Would you like to create a Multi-Account HD Key? (BIP44)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Language"),
QT_TRANSLATE_NOOP("MoneyBridge", "English"),
QT_TRANSLATE_NOOP("MoneyBridge", "French"),
QT_TRANSLATE_NOOP("MoneyBridge", "Japanese"),
QT_TRANSLATE_NOOP("MoneyBridge", "Spanish"),
QT_TRANSLATE_NOOP("MoneyBridge", "Chinese (Simplified)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Chinese (Traditional)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Next Step"),
QT_TRANSLATE_NOOP("MoneyBridge", "Write your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("MoneyBridge", "Recovery Phrase"),
QT_TRANSLATE_NOOP("MoneyBridge", "Important!"),
QT_TRANSLATE_NOOP("MoneyBridge", "You need the Wallet Recovery Phrase to restore this wallet. Write it down and keep them somewhere safe.\n\
                                                          You will be asked to confirm the Wallet Recovery Phrase in the next screen to ensure you have written it down correctly"),
QT_TRANSLATE_NOOP("MoneyBridge", "Back"),
QT_TRANSLATE_NOOP("MoneyBridge", "Please confirm your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("MoneyBridge", "Congratulations! You have successfully created a New Wallet and Account"),
QT_TRANSLATE_NOOP("MoneyBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password (if set) safe in case you ever need to recover your wallet"),
QT_TRANSLATE_NOOP("MoneyBridge", "Lets import your Wallet"),
QT_TRANSLATE_NOOP("MoneyBridge", "The Wallet Recovery Phrase could require a password to be imported"),
QT_TRANSLATE_NOOP("MoneyBridge", "Is this a Multi-Account HD Key (BIP44)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Recovery Phrase (Usually 24 words)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Congratulations! You have successfully imported your Wallet from your Recovery Phrase"),
QT_TRANSLATE_NOOP("MoneyBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password safe in case you ever need to recover your wallet again!"),
QT_TRANSLATE_NOOP("MoneyBridge", "Accounts"),
QT_TRANSLATE_NOOP("MoneyBridge", "ID"),
QT_TRANSLATE_NOOP("MoneyBridge", "Name"),
QT_TRANSLATE_NOOP("MoneyBridge", "Created"),
QT_TRANSLATE_NOOP("MoneyBridge", "Active Account"),
QT_TRANSLATE_NOOP("MoneyBridge", "Default"),
QT_TRANSLATE_NOOP("MoneyBridge", "Wallet Keys"),
QT_TRANSLATE_NOOP("MoneyBridge", "Path"),
QT_TRANSLATE_NOOP("MoneyBridge", "Active"),
QT_TRANSLATE_NOOP("MoneyBridge", "Master"),
QT_TRANSLATE_NOOP("MoneyBridge", "Make Default"),
QT_TRANSLATE_NOOP("MoneyBridge", "Activate/Deactivate"),
QT_TRANSLATE_NOOP("MoneyBridge", "Set as Master"),
QT_TRANSLATE_NOOP("MoneyBridge", "Tor connection offline"),
QT_TRANSLATE_NOOP("MoneyBridge", "i2p connection offline"),
QT_TRANSLATE_NOOP("MoneyBridge", "Wallet is encrypted and currently locked"),
QT_TRANSLATE_NOOP("MoneyBridge", "Not staking because wallet is offline"),
QT_TRANSLATE_NOOP("MoneyBridge", "0 active connections to MoneyCoin network"),
QT_TRANSLATE_NOOP("MoneyBridge", "Wallet is syncing"),
QT_TRANSLATE_NOOP("MoneyBridge", "Open chat list"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a label for this address to add it to your address book"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a address to add it to your address book"),
QT_TRANSLATE_NOOP("MoneyBridge", "Inputs"),
QT_TRANSLATE_NOOP("MoneyBridge", "Values"),
QT_TRANSLATE_NOOP("MoneyBridge", "Outputs"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a MoneyCash address to sign the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter the message you want to sign"),
QT_TRANSLATE_NOOP("MoneyBridge", "Click sign message to generate signature"),
QT_TRANSLATE_NOOP("MoneyBridge", "Copy the signed message signature"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a MoneyCash address to verify the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter the message you want to verify"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a MoneyCash signature"),
QT_TRANSLATE_NOOP("MoneyBridge", "Paste signature from clipboard"),
QT_TRANSLATE_NOOP("MoneyBridge", "Your total balance"),
QT_TRANSLATE_NOOP("MoneyBridge", "Balances overview"),
QT_TRANSLATE_NOOP("MoneyBridge", "Recent in/out transactions or stakes"),
QT_TRANSLATE_NOOP("MoneyBridge", "Select inputs to spend"),
QT_TRANSLATE_NOOP("MoneyBridge", "Optional address to receive transaction change"),
QT_TRANSLATE_NOOP("MoneyBridge", "Choose from address book"),
QT_TRANSLATE_NOOP("MoneyBridge", "Paste address from clipboard"),
QT_TRANSLATE_NOOP("MoneyBridge", "Remove this recipient"),
QT_TRANSLATE_NOOP("MoneyBridge", "Current spendable send payment balance"),
QT_TRANSLATE_NOOP("MoneyBridge", "Current spendable balance to account"),
QT_TRANSLATE_NOOP("MoneyBridge", "The address to send the payment to"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a label for this address"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a short note to send with payment (max 24 characters)"),
QT_TRANSLATE_NOOP("MoneyBridge", "The address to transfer the balance to"),
QT_TRANSLATE_NOOP("MoneyBridge", "The label for this address"),
QT_TRANSLATE_NOOP("MoneyBridge", "Amount to transfer"),
QT_TRANSLATE_NOOP("MoneyBridge", "Send to multiple recipients at once"),
QT_TRANSLATE_NOOP("MoneyBridge", "Double click to edit"),
QT_TRANSLATE_NOOP("MoneyBridge", "Date and time that the transaction was received."),
QT_TRANSLATE_NOOP("MoneyBridge", "Transaction status. Hover over this field to show number of confirmations."),
QT_TRANSLATE_NOOP("MoneyBridge", "Type of transaction."),
QT_TRANSLATE_NOOP("MoneyBridge", "Destination address of transaction."),
QT_TRANSLATE_NOOP("MoneyBridge", "Short payment note."),
QT_TRANSLATE_NOOP("MoneyBridge", "Amount removed from or added to balance."),
QT_TRANSLATE_NOOP("MoneyBridge", "The address to send the payment to  (e.g. SXywGBZBowrppUwwNUo1GCRDTibzJi7g2M)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Choose address from address book"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a public key for the address above"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a label for this group"),
QT_TRANSLATE_NOOP("MoneyBridge", "Name for this Wallet"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter a password"),
QT_TRANSLATE_NOOP("MoneyBridge", "Would you like to create a bip44 path?"),
QT_TRANSLATE_NOOP("MoneyBridge", "Your recovery phrase (Keep this safe!)"),
QT_TRANSLATE_NOOP("MoneyBridge", "Wallet Name for recovered account"),
QT_TRANSLATE_NOOP("MoneyBridge", "Enter the password for the wallet you are trying to recover"),
QT_TRANSLATE_NOOP("MoneyBridge", "Is this a bip44 path?"),
    0 // Leave this here...
};
#endif // BRIDGETRANSLATIONS_H
