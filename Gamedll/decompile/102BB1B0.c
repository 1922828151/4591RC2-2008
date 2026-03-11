/*
 * func-name: ?Printf@GUIConsole@@QAAXPBDZZ_0
 * func-address: 0x102bb1b0
 * callers: 0x10009b10
 * callees: 0x1000dcb0, 0x102c9d62
 */

void GUIConsole::Printf(GUIConsole *this, char *Format, ...)
{
  char v2; // [esp-20h] [ebp-428h] BYREF
  int v3; // [esp-1Ch] [ebp-424h]
  int v4; // [esp-18h] [ebp-420h]
  int v5; // [esp-14h] [ebp-41Ch]
  int v6; // [esp-10h] [ebp-418h]
  int v7; // [esp-Ch] [ebp-414h]
  int v8; // [esp-8h] [ebp-410h]
  int v9; // [esp-4h] [ebp-40Ch]
  char *v10; // [esp+0h] [ebp-408h]
  char Buffer[1024]; // [esp+4h] [ebp-404h] BYREF
  va_list ArgList; // [esp+414h] [ebp+Ch] BYREF

  va_start(ArgList, Format);
  vsprintf(Buffer, Format, ArgList);
  v9 = -16720896;
  v10 = &v2;
  std::string::string(&v2, Buffer);
  GUIConsole::AddHistoryLine(v2, v3, v4, v5, v6, v7, v8, v9);
}
