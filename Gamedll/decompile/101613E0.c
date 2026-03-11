/*
 * func-name: ?DisableSkill@Item@GameClient@@UAEXK@Z_0
 * func-address: 0x101613e0
 * callers: 0x1001495c
 * callees: none
 */

void __thiscall GameClient::Item::DisableSkill(GameClient::Item *this, unsigned int a2)
{
  int v2; // eax
  void (*v3)(void); // eax

  v2 = *((_DWORD *)this + 36);
  if ( !v2 || *(_DWORD *)(v2 + 12) != a2 )
  {
    v3 = *(void (**)(void))(*(_DWORD *)this + 156);
    *((_DWORD *)this + 194) = -1;
    v3();
  }
}
