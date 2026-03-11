/*
 * func-name: ?OnDestroy@ControlledEstab@GameClient@@UAEXXZ_0
 * func-address: 0x1019cd50
 * callers: 0x10012cab
 * callees: none
 */

void __thiscall GameClient::ControlledEstab::OnDestroy(GameClient::ControlledEstab *this)
{
  int v2; // eax
  int v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx

  v2 = *((_DWORD *)this + 116);
  if ( v2 != 2 )
  {
    if ( v2 )
    {
      if ( v2 != 1 )
      {
LABEL_8:
        *((_DWORD *)this + 116) = 2;
        goto LABEL_9;
      }
      v3 = *((_DWORD *)this + 118);
    }
    else
    {
      v3 = *((_DWORD *)this + 117);
    }
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 24))(v3);
    goto LABEL_8;
  }
LABEL_9:
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 117);
  if ( v4 )
  {
    (**v4)(v4, 1);
    *((_DWORD *)this + 117) = 0;
  }
  v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 118);
  if ( v5 )
  {
    (**v5)(v5, 1);
    *((_DWORD *)this + 118) = 0;
  }
  GameClient::Establishment::OnDestroy(this);
}
