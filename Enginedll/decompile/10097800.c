/*
 * func-name: ?Warning@@YAXPBDZZ
 * func-address: 0x10097800
 * callers: 0x10014730, 0x10033440, 0x10034c30, 0x10037b30, 0x1003a4c0, 0x10040990, 0x10042bf0, 0x10049a00, 0x10049e00, 0x1004a8d0, 0x1004bcb0, 0x1007c450, 0x1008b740, 0x1009b4b0, 0x100db530, 0x100e3980, 0x100f88e0, 0x10117840, 0x10118d20, 0x10118dc0, 0x10118ff0, 0x10119750, 0x101198c0, 0x10119d20, 0x1011acf0, 0x1011b080, 0x1011b490, 0x10136530
 * callees: 0x100956d0, 0x100971c0, 0x100e2550, 0x1017c0d0, 0x101a2780
 */

void Warning(char *Format, ...)
{
  const char *v1; // eax
  char *v2; // eax
  char v3; // [esp-38h] [ebp-1FA8h] BYREF
  int v4; // [esp-34h] [ebp-1FA4h]
  int v5; // [esp-30h] [ebp-1FA0h]
  int v6; // [esp-2Ch] [ebp-1F9Ch]
  int v7; // [esp-28h] [ebp-1F98h]
  int v8; // [esp-24h] [ebp-1F94h]
  int v9; // [esp-20h] [ebp-1F90h]
  char v10; // [esp-1Ch] [ebp-1F8Ch] BYREF
  int v11; // [esp-18h] [ebp-1F88h]
  int v12; // [esp-14h] [ebp-1F84h]
  int v13; // [esp-10h] [ebp-1F80h]
  int v14; // [esp-Ch] [ebp-1F7Ch]
  int v15; // [esp-8h] [ebp-1F78h]
  int v16; // [esp-4h] [ebp-1F74h]
  char *v17; // [esp+0h] [ebp-1F70h]
  char *v18; // [esp+4h] [ebp-1F6Ch]
  char v19[28]; // [esp+8h] [ebp-1F68h] BYREF
  char Buffer[8000]; // [esp+24h] [ebp-1F4Ch] BYREF
  int v21; // [esp+1F6Ch] [ebp-4h]
  va_list ArgList; // [esp+1F78h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  vsprintf(Buffer, Format, ArgList);
  std::string::string(v19, "WARNING: ");
  v21 = 0;
  std::string::operator+=(v19, Buffer);
  v18 = &v10;
  std::string::string(&v10, &unk_101C3A3F);
  v17 = &v3;
  LOBYTE(v21) = 1;
  std::string::string(&v3, "SuppressWarnings");
  LOBYTE(v21) = 2;
  Engine::Instance();
  LOBYTE(v21) = 0;
  if ( (unsigned __int8)sub_1017C0D0(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) )
  {
    v1 = (const char *)std::string::c_str(v19);
    LogPrintf(v1);
  }
  else
  {
    v2 = (char *)std::string::c_str(v19);
    Error(v2);
  }
  v21 = -1;
  std::string::~string(v19);
}
