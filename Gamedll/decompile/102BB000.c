/*
 * func-name: ?KeyTab@GUIConsole@@AAEXXZ_0
 * func-address: 0x102bb000
 * callers: 0x100052ae
 * callees: 0x1000dcb0, 0x1001386d, 0x102c9d62
 */

void __thiscall GUIConsole::KeyTab(GUIConsole *this)
{
  int v2; // edi
  char *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  char v7; // [esp-20h] [ebp-A0h] BYREF
  int v8; // [esp-1Ch] [ebp-9Ch]
  int v9; // [esp-18h] [ebp-98h]
  int v10; // [esp-14h] [ebp-94h]
  int v11; // [esp-10h] [ebp-90h]
  int v12; // [esp-Ch] [ebp-8Ch]
  int v13; // [esp-8h] [ebp-88h]
  int v14; // [esp-4h] [ebp-84h]
  char *v15; // [esp+14h] [ebp-6Ch]
  GUIConsole *v16; // [esp+18h] [ebp-68h]
  _BYTE v17[28]; // [esp+1Ch] [ebp-64h] BYREF
  _BYTE v18[28]; // [esp+38h] [ebp-48h] BYREF
  _BYTE v19[28]; // [esp+54h] [ebp-2Ch] BYREF
  int v20; // [esp+7Ch] [ebp-4h]

  v14 = -16720896;
  v15 = &v7;
  v16 = this;
  std::string::string(&v7, "---------- Console Commands and Variables: ----------");
  GUIConsole::AddHistoryLine(v7, v8, v9, v10, v11, v12, v13, v14);
  std::string::string(v19);
  v2 = 0;
  v20 = 0;
  v3 = (char *)this + 172;
  while ( 1 )
  {
    v4 = *((_DWORD *)v3 + 1);
    if ( v4 )
      v4 = (*((_DWORD *)v3 + 2) - v4) / 36;
    if ( v2 >= v4 )
      break;
    v5 = sub_1001386D(v17, v2);
    LOBYTE(v20) = 1;
    v6 = std::operator+<char>(v18, v5, "      ");
    LOBYTE(v20) = 2;
    std::string::operator+=(v19, v6);
    LOBYTE(v20) = 1;
    std::string::~string(v18);
    LOBYTE(v20) = 0;
    std::string::~string(v17);
    if ( (unsigned int)std::string::length(v19) > 0x3C )
    {
      v14 = -16720896;
      v15 = &v7;
      std::string::string(&v7, v19);
      GUIConsole::AddHistoryLine(v7, v8, v9, v10, v11, v12, v13, v14);
      std::string::operator=(v19, &unk_103252B3);
    }
    ++v2;
  }
  if ( (unsigned __int8)std::operator!=<char>(v19, &unk_103252B6) )
  {
    v14 = -16720896;
    v15 = &v7;
    std::string::string(&v7, v19);
    GUIConsole::AddHistoryLine(v7, v8, v9, v10, v11, v12, v13, v14);
  }
  v20 = -1;
  std::string::~string(v19);
}
