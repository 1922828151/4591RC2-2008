/*
 * func-name: ?SyncSeatRotation@Establishment@GameClient@@UAEXJABVVector@@@Z_0
 * func-address: 0x101a22f0
 * callers: 0x1000afd8
 * callees: none
 */

void __thiscall GameClient::Establishment::SyncSeatRotation(
        GameClient::Establishment *this,
        int a2,
        const struct Vector *a3)
{
  int v4; // ecx
  _DWORD *v5; // eax

  if ( a2 >= 0 )
  {
    v4 = *((_DWORD *)this + 49);
    if ( v4 )
    {
      if ( a2 < (unsigned int)((*((_DWORD *)this + 50) - v4) >> 2) )
      {
        v5 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 49) + 4 * a2) + 320);
        *v5 = *(_DWORD *)a3;
        v5[1] = *((_DWORD *)a3 + 1);
        v5[2] = *((_DWORD *)a3 + 2);
      }
    }
  }
}
