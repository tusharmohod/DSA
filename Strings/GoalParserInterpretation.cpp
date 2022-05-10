string goalParserInterpretation(string command) {
    string s = "";
    if(command[0] == 'a' || command[0] == 'l' || command[0] == 'G')
        s += command[0];
    for(int i = 1; i < command.size(); i++) {
        if(command[i] == '(' || (command[i] == ')' && command[i-1] != '(')) {
            continue;
        }
        if(command[i-1] == '(') {
            if(command[i] == ')') {
                s += 'o';
            }
            else {
                s += command[i];
            }
        }
        else {
            s += command[i];
        }
        
    }
    return s;
}