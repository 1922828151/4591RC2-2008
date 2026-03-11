/*
 * func-name: ?OnModel@AdapterActorALReport@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x100f3070
 * callers: 0x100098f4
 * callees: 0x1001940c
 */

void __thiscall GameClient::AdapterActorALReport::OnModel(
        GameClient::AdapterActorALReport *this,
        int a2,
        struct Model *a3)
{
  if ( *((_DWORD *)this + 1) )
  {
    *(_DWORD *)(*((_DWORD *)this + 1) + 716) = a3;
    *(_BYTE *)(*((_DWORD *)this + 1) + 816) = 0;
    GameClient::AdapterActor::RemoveAsyncHandle(*((GameClient::AdapterActor **)this + 1), a2);
  }
}
