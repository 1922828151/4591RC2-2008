/*
 * func-name: ?UpdateTransformFPV@AEquip@GameClient@@QAEXXZ_0
 * func-address: 0x100fe3e0
 * callers: 0x1000f17d
 * callees: none
 */

void __thiscall GameClient::AEquip::UpdateTransformFPV(GameClient::AEquip *this)
{
  if ( *((_DWORD *)this + 341) )
  {
    if ( *((_BYTE *)this + 1384) )
    {
      (*(void (__thiscall **)(_DWORD, char *, char *))(**((_DWORD **)this + 341) + 28))(
        *((_DWORD *)this + 341),
        (char *)this + 868,
        (char *)this + 856);
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 341) + 20))(*((_DWORD *)this + 341));
    }
  }
}
