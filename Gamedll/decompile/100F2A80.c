/*
 * func-name: ?SetParentAA@AdapterActor@GameClient@@QAEXPAV12@@Z_0
 * func-address: 0x100f2a80
 * callers: 0x1000f826
 * callees: none
 */

void __thiscall GameClient::AdapterActor::SetParentAA(
        GameClient::AdapterActor *this,
        struct GameClient::AdapterActor *a2)
{
  int v2; // eax
  GameClient::AdapterActor *v3; // eax
  GameClient::AdapterActor *i; // edx
  int v5; // edx
  int v6; // eax
  int v7; // edx

  v2 = *((_DWORD *)this + 312);
  if ( v2 )
  {
    v3 = *(GameClient::AdapterActor **)(v2 + 1256);
    for ( i = 0; v3; v3 = (GameClient::AdapterActor *)*((_DWORD *)v3 + 313) )
    {
      if ( v3 == this )
      {
        if ( i )
          *((_DWORD *)i + 313) = *((_DWORD *)this + 313);
        v5 = *((_DWORD *)this + 312);
        if ( v3 == *(GameClient::AdapterActor **)(v5 + 1256) )
          *(_DWORD *)(v5 + 1256) = *((_DWORD *)this + 313);
      }
      i = v3;
    }
  }
  *((_DWORD *)this + 312) = a2;
  if ( a2 )
  {
    v6 = *((_DWORD *)a2 + 314);
    if ( v6 )
    {
      do
      {
        v7 = v6;
        v6 = *(_DWORD *)(v6 + 1252);
      }
      while ( v6 );
      *(_DWORD *)(v7 + 1252) = this;
    }
    else
    {
      *((_DWORD *)a2 + 314) = this;
    }
  }
}
