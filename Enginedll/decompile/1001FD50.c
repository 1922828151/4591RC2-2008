/*
 * func-name: ?RemoveExclusionListHandle@Light@@QAEXPAVActor@@@Z
 * func-address: 0x1001fd50
 * callers: none
 * callees: 0x1001e9c0
 */

void __thiscall Light::RemoveExclusionListHandle(Light *this, struct Actor *a2)
{
  char *v2; // ebx
  _DWORD *v3; // edi
  char *v4; // esi
  char *v5; // ebx
  int v6[2]; // [esp+4h] [ebp-8h] BYREF

  if ( a2 )
  {
    v2 = (char *)*((_DWORD *)this + 361);
    v3 = (_DWORD *)((char *)this + 1436);
    if ( *((_DWORD *)this + 360) > (unsigned int)v2 )
      invalid_parameter_noinfo();
    v4 = (char *)v3[1];
    if ( (unsigned int)v4 > v3[2] )
      invalid_parameter_noinfo();
    for ( v6[1] = (int)v4; v4 != v2; v4 += 4 )
    {
      if ( *(struct Actor **)v4 == a2 )
        break;
    }
    v5 = (char *)v3[2];
    if ( v3[1] > (unsigned int)v5 )
      invalid_parameter_noinfo();
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v4 != v5 )
      std::vector<Model *>::erase(v3, v6, (int)v3, v4);
  }
}
