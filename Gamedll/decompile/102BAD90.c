/*
 * func-name: ?PrintfColor@GUIConsole@@QAAXW4ConsoleMessageType@@HKPBDZZ_0
 * func-address: 0x102bad90
 * callers: 0x10007d38
 * callees: 0x100194cf, 0x102c9d62
 */

int GUIConsole::PrintfColor(int a1, int a2, int a3, int a4, char *Format, ...)
{
  char v6; // [esp-20h] [ebp-428h] BYREF
  int v7; // [esp-1Ch] [ebp-424h]
  int v8; // [esp-18h] [ebp-420h]
  int v9; // [esp-14h] [ebp-41Ch]
  int v10; // [esp-10h] [ebp-418h]
  int v11; // [esp-Ch] [ebp-414h]
  int v12; // [esp-8h] [ebp-410h]
  int v13; // [esp-4h] [ebp-40Ch]
  char *v14; // [esp+0h] [ebp-408h]
  char Buffer[1024]; // [esp+4h] [ebp-404h] BYREF
  va_list ArgList; // [esp+420h] [ebp+18h] BYREF

  va_start(ArgList, Format);
  vsprintf(Buffer, Format, ArgList);
  v13 = a4;
  v14 = &v6;
  std::string::string(&v6, Buffer);
  return GUIConsole::AddHistoryLine(a2, a3, v6, v7, v8, v9, v10, v11, v12, v13);
}
