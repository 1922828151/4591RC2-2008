/*
 * func-name: ?KeyReturn@GUIConsole@@AAEXXZ_0
 * func-address: 0x102bae90
 * callers: 0x1001a2cb
 * callees: 0x1000ab4b, 0x1000dcb0, 0x1000fae7, 0x102c72a0, 0x102c73b0, 0x102c9d62
 */

void __thiscall GUIConsole::KeyReturn(GUIConsole *this)
{
  char *v2; // edi
  int v3; // eax
  int v4; // eax
  bool v5; // zf
  char v6; // [esp-20h] [ebp-64h] BYREF
  int v7; // [esp-1Ch] [ebp-60h] BYREF
  int v8; // [esp-18h] [ebp-5Ch]
  int v9; // [esp-14h] [ebp-58h]
  int v10; // [esp-10h] [ebp-54h]
  int v11; // [esp-Ch] [ebp-50h]
  int v12; // [esp-8h] [ebp-4Ch]
  int v13; // [esp-4h] [ebp-48h]
  int v14; // [esp+0h] [ebp-44h]
  int *v15; // [esp+14h] [ebp-30h]
  _BYTE v16[28]; // [esp+18h] [ebp-2Ch] BYREF
  int v17; // [esp+40h] [ebp-4h]

  v2 = (char *)this + 144;
  sub_102C72A0((char *)this + 144, v14);
  sub_102C73B0(v2, v13);
  if ( (unsigned __int8)std::operator==<char>(v2, &unk_103252AB) )
  {
    *((_DWORD *)this + 47) = 0;
  }
  else
  {
    sub_1000AB4B((char *)this + 128, v2);
    if ( !*((_BYTE *)this + 68) )
    {
      v13 = -16720896;
      v15 = (int *)&v6;
      std::string::string(&v6, v2);
      GUIConsole::AddHistoryLine(v6, v7, v8, v9, v10, v11, v12, v13);
      v15 = &v7;
      std::string::string(&v7, v2);
      sub_1000FAE7((int)v16, v7, v8, v9, v10, v11, v12, v13);
      v17 = 0;
      if ( std::string::size(v16) )
      {
        v13 = -16720896;
        v15 = (int *)&v6;
        std::string::string(&v6, v16);
        GUIConsole::AddHistoryLine(v6, v7, v8, v9, v10, v11, v12, v13);
      }
      v17 = -1;
      std::string::~string(v16);
    }
    std::string::operator=(v2, &unk_103252B2);
    std::string::operator=(this, v2);
    *((_DWORD *)this + 47) = 0;
    v3 = *((_DWORD *)this + 33);
    if ( v3 )
      v4 = (*((_DWORD *)this + 34) - v3) / 28;
    else
      v4 = 0;
    v5 = *((_BYTE *)this + 68) == 0;
    *((_DWORD *)this + 7) = v4;
    if ( !v5 )
    {
      *((_BYTE *)this + 68) = 0;
      *((_BYTE *)this + 32) = 0;
    }
  }
}
