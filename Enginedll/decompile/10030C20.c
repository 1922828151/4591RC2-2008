/*
 * func-name: ?AddExclusionListHandle@Light@@QAEXPAVActor@@@Z
 * func-address: 0x10030c20
 * callers: none
 * callees: 0x10012a30
 */

void __thiscall Light::AddExclusionListHandle(Light *this, struct Actor *a2)
{
  struct Actor *v2; // ebp
  struct Actor **v3; // ebx
  _DWORD *v4; // edi
  struct Actor **v5; // esi
  struct Actor **v6; // ebx

  v2 = a2;
  if ( a2 )
  {
    v3 = (struct Actor **)*((_DWORD *)this + 361);
    v4 = (_DWORD *)((char *)this + 1436);
    if ( *((_DWORD *)this + 360) > (unsigned int)v3 )
      invalid_parameter_noinfo();
    v5 = (struct Actor **)v4[1];
    if ( (unsigned int)v5 > v4[2] )
      invalid_parameter_noinfo();
    for ( ; v5 != v3; ++v5 )
    {
      if ( *v5 == v2 )
        break;
    }
    v6 = (struct Actor **)v4[2];
    if ( v4[1] > (unsigned int)v6 )
      invalid_parameter_noinfo();
    if ( !v4 )
      invalid_parameter_noinfo();
    if ( v5 == v6 )
      std::vector<Actor *>::push_back(v4, (int *)&a2);
  }
}
