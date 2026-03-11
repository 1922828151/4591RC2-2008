/*
 * func-name: ?AddDropShadowPartner@Actor@@QAEXPAV1@@Z
 * func-address: 0x100507e0
 * callers: none
 * callees: 0x10012a30
 */

void __thiscall Actor::AddDropShadowPartner(Actor *this, struct Actor *a2)
{
  _DWORD *v2; // edi
  struct Actor **v3; // ebx
  struct Actor **v4; // esi
  struct Actor *i; // ebp
  struct Actor **v6; // [esp+8h] [ebp-Ch]

  v2 = (_DWORD *)((char *)this + 176);
  v6 = (struct Actor **)*((_DWORD *)this + 46);
  if ( *((_DWORD *)this + 45) > (unsigned int)v6 )
    invalid_parameter_noinfo();
  v3 = (struct Actor **)v2[2];
  if ( v2[1] > (unsigned int)v3 )
    invalid_parameter_noinfo();
  v4 = (struct Actor **)v2[1];
  if ( (unsigned int)v4 > v2[2] )
    invalid_parameter_noinfo();
  for ( i = a2; v4 != v3; ++v4 )
  {
    if ( *v4 == a2 )
      break;
  }
  if ( !v2 )
    invalid_parameter_noinfo();
  if ( v4 == v6 )
  {
    if ( *((_DWORD *)i + 179) )
      std::vector<Actor *>::push_back(v2, (int *)&a2);
  }
}
