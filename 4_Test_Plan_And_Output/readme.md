# TEST PLAN

## Table no - High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** | 
|-------------|--------------------------------------------------------------|-------------|-------------|----------------|
|  H_01       |Calling Main Menu|main_menu()|TRUE|TRUE|
|  H_01       |Calling Start Quiz Menu|start_quiz()|TRUE|TRUE|
|  H_02       |Calling Show all Records Menu|show_record()|TRUE|TRUE|
|  H_03       |Calling Help Menu|help()|TRUE|TRUE|
|  H_03       |Calling Quit Menu|exit(0)|TRUE|TRUE|


## Table no - Low level test plan

| **Test ID** | **Description**                                              |HL ID| **Actual Out** |**TestCase Run**  |    
|-------------|--------------------------------------------------------------|-----|------------------|------------------|
|  L_01       |Pressing Key **'s'** to call start_quiz() function|H_01|0|Yes |
|  L_02       |Pressing Key **'S'** to call start_quiz() function|H_01|0|Yes |
|  L_03       |Pressing Key **'$'** to call start_quiz() function|H_01|1|Yes |
|  L_04       |Pressing Key **'v'** to call show_record() function|H_01|0|Yes |
|  L_05       |Pressing Key **'V'** to call show_record() function|H_01|0|Yes |
|  L_06       |Pressing Key **'^'** to call show_record() function|H_01|1|Yes |
|  L_07       |Pressing Key **'h'** to call help() function|H_01|0|Yes |
|  L_08       |Pressing Key **'H'** to call help() function|H_01|0|Yes |
|  L_09       |Pressing Key **'#'** to call help() function|H_01|1|Yes |
|  L_10       |Pressing Key **'q'** to call exit(0)|H_01|0|Yes |
|  L_11       |Pressing Key **'Q'** to call exit(0)|H_01|0|Yes |
|  L_12       |Pressing Key **'@'** to call exit(0)|H_01|1|Yes |
|  L_13       |Pressing Key **'y'** for starting attempt |H_02|0|Yes |
|  L_14       |Pressing Key **'Y'** for starting attempt |H_02|0|Yes |
|  L_15       |Pressing Key **'~'** for starting attempt |H_02|1|Yes |
|  L_16       |Pressing Key **'y'** for reattempt quiz |H_02|0|Yes |
|  L_17       |Pressing Key **'Y'** for reattempt quiz |H_02|0|Yes |
|  L_18       |Pressing Key **'~'** for reattempt quiz |H_02|1|Yes |
|  L_19       |Pressing Key **'n'** for submiting score |H_02|0|Yes |
|  L_20       |Pressing Key **'N'** for submiting score |H_02|0|Yes |
|  L_21       |Pressing Key **'&'** for submiting score |H_02|1|Yes |