/*
 * func-name: ?UnloadResource@ControlledEstab@GameClient@@UAEXXZ_0
 * func-address: 0x1019c510
 * callers: 0x1001914b
 * callees: 0x100072bb, 0x10009fd9, 0x1000fe5c, 0x10015078
 */

void __thiscall GameClient::ControlledEstab::UnloadResource(GameClient::ControlledEstab *this)
{
  int i; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( *((_DWORD *)this + 114) )
  {
    for ( i = 0; i < sub_10015078(); ++i )
    {
      sub_1000FE5C(i);
      sub_10009FD9(0);
      sub_1000FE5C(i);
      sub_100072BB(0);
    }
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 117) + 8))(*((_DWORD *)this + 117));
  if ( *((_DWORD *)this + 118) )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 118) + 8))(*((_DWORD *)this + 118));
  if ( *((_DWORD *)this + 120) )
  {
    v3 = AudioDevice::Instance();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(v3, *((_DWORD *)this + 120));
  }
  if ( *((_DWORD *)this + 121) )
  {
    v4 = AudioDevice::Instance();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 20))(v4, *((_DWORD *)this + 121));
  }
  if ( *((_DWORD *)this + 122) )
  {
    v5 = AudioDevice::Instance();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 20))(v5, *((_DWORD *)this + 122));
  }
  GameClient::Establishment::UnloadResource(this);
}
