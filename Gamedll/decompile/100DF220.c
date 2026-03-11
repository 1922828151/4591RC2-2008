/*
 * func-name: sub_100DF220
 * func-address: 0x100df220
 * callers: 0x10001d7a
 * callees: none
 */

int __thiscall sub_100DF220(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax

  if ( *(_BYTE *)(this + 1064) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1052) + 44))(*(_DWORD *)(this + 1052));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1052) + 52))(*(_DWORD *)(this + 1052));
    v2 = AudioDevice::Instance();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 20))(v2, *(_DWORD *)(this + 1052));
    v3 = AudioDevice::Instance();
    *(_DWORD *)(this + 1052) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
    *(_BYTE *)(this + 1064) = 0;
  }
  v4 = **(_DWORD **)(this + 1052);
  v5 = std::string::c_str(this + 1068);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(v4 + 4))(*(_DWORD *)(this + 1052), v5, 0);
}
