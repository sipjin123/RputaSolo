import unreal

# Get the main menu class
menus = unreal.ToolMenus.get()
menu_name = 'LevelEditor.MainMenu'
menu = menus.find_menu(menu_name)

# Custom menu parameters
owner = menu.get_name()
section_name = 'PythonTools'
name = 'Camera360v2'
label = 'Camera360v2'
tool_tip = 'Menu Camera360v2'

# Add and refresh
menu.add_sub_menu(owner, section_name, name, label, tool_tip)

menus.refresh_all_widgets()


menu_name = "LevelEditor.MainMenu.Camera360v2"
menu = menus.find_menu(menu_name)

# Set the button type and label
entry = unreal.ToolMenuEntry(type=unreal.MultiBlockType.MENU_ENTRY)
entry2 = unreal.ToolMenuEntry(type=unreal.MultiBlockType.MENU_ENTRY)
entry3 = unreal.ToolMenuEntry(type=unreal.MultiBlockType.MENU_ENTRY)
entry4 = unreal.ToolMenuEntry(type=unreal.MultiBlockType.MENU_ENTRY)
entry5 = unreal.ToolMenuEntry(type=unreal.MultiBlockType.MENU_ENTRY)
entry.set_label('6 task solution')
entry2.set_label('PathTraicing')
entry3.set_label('PathTraicing Record')
entry4.set_label('Version Info')
entry5.set_label('Help Widget')

command_string = "import unreal;asset_ref=unreal.load_asset('/Camera360v2/Camera360_v2/Blueprints/Widget/Settings/Widget_6_task_solution');unreal.EditorUtilitySubsystem().spawn_and_register_tab(asset_ref)"

command_string2 = "import unreal;asset_ref=unreal.load_asset('/Camera360v2/Camera360_v2/Blueprints/Widget/Settings/Widget_PathTracingSolution');unreal.EditorUtilitySubsystem().spawn_and_register_tab(asset_ref)"

command_string3 = "import unreal;asset_ref=unreal.load_asset('/Camera360v2/Camera360_v2/Blueprints/Widget/Settings/Widget_PathTracingPreview');unreal.EditorUtilitySubsystem().spawn_and_register_tab(asset_ref)"

command_string4 = "import unreal;asset_ref=unreal.load_asset('/Camera360v2/Camera360_v2/Blueprints/Widget/Settings/Widget_Version');unreal.EditorUtilitySubsystem().spawn_and_register_tab(asset_ref)"

command_string5 = "import unreal;asset_ref=unreal.load_asset('/Camera360v2/Camera360_v2/Blueprints/Widget/Settings/Widget_Help');unreal.EditorUtilitySubsystem().spawn_and_register_tab(asset_ref)"

# Set button command
entry.set_string_command(unreal.ToolMenuStringCommandType.PYTHON, "", string=command_string)
entry2.set_string_command(unreal.ToolMenuStringCommandType.PYTHON, "", string=command_string2)
entry3.set_string_command(unreal.ToolMenuStringCommandType.PYTHON, "", string=command_string3)
entry4.set_string_command(unreal.ToolMenuStringCommandType.PYTHON, "", string=command_string4)
entry5.set_string_command(unreal.ToolMenuStringCommandType.PYTHON, "", string=command_string5)

# Add and refresh
section_name = ''
menu.add_menu_entry(section_name, entry)
menu.add_menu_entry(section_name, entry2)
menu.add_menu_entry(section_name, entry3)
menu.add_menu_entry(section_name, entry4)
menu.add_menu_entry(section_name, entry5)
menus.refresh_all_widgets()

