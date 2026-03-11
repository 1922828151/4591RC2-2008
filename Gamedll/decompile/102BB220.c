/*
 * func-name: ?PrintfColor@GUIConsole@@QAAXKPBDZZ_0
 * func-address: 0x102bb220
 * callers: 0x100089b8
 * callees: 0x1000dcb0, 0x102c9d62
 */

void GUIConsole::PrintfColor(GUIConsole *this, unsigned int a2, char *Format, ...)
{
  char v3; // [esp-20h] [ebp-428h] BYREF
  int v4; // [esp-1Ch] [ebp-424h]
  int v5; // [esp-18h] [ebp-420h]
  int v6; // [esp-14h] [ebp-41Ch]
  int v7; // [esp-10h] [ebp-418h]
  int v8; // [esp-Ch] [ebp-414h]
  int v9; // [esp-8h] [ebp-410h]
  int v10; // [esp-4h] [ebp-40Ch]
  char *v11; // [esp+0h] [ebp-408h]
  char Buffer[1024]; // [esp+4h] [ebp-404h] BYREF
  va_list ArgList; // [esp+418h] [ebp+10h] BYREF

  va_start(ArgList, Format);
  vsprintf(Buffer, Format, ArgList);
  v10 = a2;
  v11 = &v3;
  std::string::string(&v3, Buffer);
  GUIConsole::AddHistoryLine(v3, v4, v5, v6, v7, v8, v9, v10);
}
