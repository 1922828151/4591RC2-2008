/*
 * func-name: ?GetAssistantPos@Robot@GameClient@@QBE?AVMatrix@@XZ_0
 * func-address: 0x10177cc0
 * callers: 0x10004da4
 * callees: 0x102c1270, 0x102c9ea2
 */

float *__thiscall GameClient::Robot::GetAssistantPos(_DWORD *this, float *a2)
{
  int v3; // ecx
  void (__thiscall *v4)(int, _BYTE *, float *, _DWORD); // eax
  _BYTE v6[28]; // [esp+10h] [ebp-28h] BYREF
  int v7; // [esp+34h] [ebp-4h]

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[4] = 0.0;
  a2[5] = 0.0;
  a2[6] = 0.0;
  a2[8] = 0.0;
  a2[9] = 0.0;
  a2[10] = 0.0;
  a2[12] = 0.0;
  a2[13] = 0.0;
  a2[14] = 0.0;
  memset(a2, 0, 0x40u);
  sub_102C1270(1.0);
  a2[15] = 1.0;
  if ( this[43] )
  {
    std::string::string(v6, "WeaponPoint1");
    v3 = this[43];
    v4 = *(void (__thiscall **)(int, _BYTE *, float *, _DWORD))(*(_DWORD *)v3 + 120);
    v7 = 0;
    v4(v3, v6, a2, 0);
    v7 = -1;
    std::string::~string(v6);
  }
  return a2;
}
