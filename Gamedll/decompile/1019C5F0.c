/*
 * func-name: ?OnLoadModelComplete@ControlledEstab@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x1019c5f0
 * callers: 0x10007bc1
 * callees: 0x10009c0a
 */

void __thiscall GameClient::ControlledEstab::OnLoadModelComplete(
        GameClient::ControlledEstab *this,
        int a2,
        struct Model *a3)
{
  GameClient::Establishment::OnLoadModelComplete(this, a2, a3);
  if ( a2 == *((_DWORD *)this + 76) )
  {
    (*(void (__thiscall **)(_DWORD, struct Model *))(**((_DWORD **)this + 117) + 12))(*((_DWORD *)this + 117), a3);
    if ( *((_DWORD *)this + 118) )
      (*(void (__thiscall **)(_DWORD, struct Model *))(**((_DWORD **)this + 118) + 12))(*((_DWORD *)this + 118), a3);
    *(float *)(*((_DWORD *)this + 75) + 276) = *((float *)a3 + 53);
  }
}
