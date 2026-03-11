/*
 * func-name: ?OnLoadModelComplete@EstabDoor@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x101a0e80
 * callers: 0x1000427d
 * callees: 0x1000a6a0, 0x10018845
 */

void __thiscall GameClient::EstabDoor::OnLoadModelComplete(GameClient::EstabDoor *this, int a2, struct Model *a3)
{
  GameClient::NonControlledEstab::OnLoadModelComplete(this, a2, a3);
  if ( *((_DWORD *)this + 75) )
  {
    if ( AnimationSet::GetDXSet((GameClient::EstabDoor *)((char *)this + 508)) )
      *((_DWORD *)this + 120) = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 75) + 116))(
                                  *((_DWORD *)this + 75),
                                  (char *)this + 508);
    if ( AnimationSet::GetDXSet((GameClient::EstabDoor *)((char *)this + 552)) )
      *((_DWORD *)this + 121) = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 75) + 116))(
                                  *((_DWORD *)this + 75),
                                  (char *)this + 552);
    if ( AnimationSet::GetDXSet((GameClient::EstabDoor *)((char *)this + 596)) )
      *((_DWORD *)this + 122) = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 75) + 116))(
                                  *((_DWORD *)this + 75),
                                  (char *)this + 596);
    if ( AnimationSet::GetDXSet((GameClient::EstabDoor *)((char *)this + 640)) )
      *((_DWORD *)this + 123) = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 75) + 116))(
                                  *((_DWORD *)this + 75),
                                  (char *)this + 640);
    if ( AnimationSet::GetDXSet((GameClient::EstabDoor *)((char *)this + 684)) )
      *((_DWORD *)this + 124) = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 75) + 116))(
                                  *((_DWORD *)this + 75),
                                  (char *)this + 684);
    if ( AnimationSet::GetDXSet((GameClient::EstabDoor *)((char *)this + 728)) )
      *((_DWORD *)this + 125) = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 75) + 116))(
                                  *((_DWORD *)this + 75),
                                  (char *)this + 728);
    if ( AnimationSet::GetDXSet((GameClient::EstabDoor *)((char *)this + 772)) )
      *((_DWORD *)this + 126) = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 75) + 116))(
                                  *((_DWORD *)this + 75),
                                  (char *)this + 772);
    GameClient::EstabDoor::SetDoorState(*((_DWORD *)this + 119));
  }
}
