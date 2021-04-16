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
|  L_01       |Pressing Key **'s'** |H_01|0|Yes |
|  L_02       |Pressing Key **'S'** |H_01|0|Yes |
|  L_03       |Pressing Key **'$'** |H_01|1|Yes |
|  L_04       |Pressing Key **'v'** |H_02|0|Yes |
|  L_05       |Pressing Key **'V'** |H_02|0|Yes |
|  L_06       |Pressing Key **'^'** |H_02|1|Yes |
|  L_07       |Pressing Key **'h'** |H_03|0|Yes |
|  L_08       |Pressing Key **'H'** |H_03|0|Yes |
|  L_09       |Pressing Key **'#'** |H_03|1|Yes |
|  L_10       |Pressing Key **'q'** |H_04|0|Yes |
|  L_11       |Pressing Key **'Q'** |H_04|0|Yes |
|  L_12       |Pressing Key **'@'** |H_04|1|Yes |