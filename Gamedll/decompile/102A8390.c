/*
 * func-name: sub_102A8390
 * func-address: 0x102a8390
 * callers: none
 * callees: 0x10012ee0, 0x102c9d50, 0x102c9d98
 */

int __stdcall sub_102A8390(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD v4[2]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v5[12]; // [esp+14h] [ebp-18h] BYREF
  int v6; // [esp+28h] [ebp-4h]

  v1 = operator new(0x28u);
  v2 = v1;
  v4[0] = v1;
  v6 = 0;
  if ( v1 )
  {
    std::string::string(v1 + 3);
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
  }
  else
  {
    v2 = 0;
  }
  v2[2] = a1;
  v4[0] = a1;
  v6 = -1;
  v4[1] = v2;
  sub_10012EE0((int)v5, (int)v4);
  if ( v5[8] == 1 )
    return 0;
  std::string::~string(v2 + 3);
  operator delete(v2);
  return -1;
}
