/*
 * func-name: ?SetWorld@Actor@@UAEXPAVWorld@@@Z
 * func-address: 0x1004e860
 * callers: none
 * callees: 0x101025c0, 0x10104470, 0x10141630, 0x10143fd0
 */

void __thiscall Actor::SetWorld(Actor *this, struct World *a2)
{
  int v3; // eax
  unsigned int i; // edi
  int v5; // ecx
  int v6; // eax
  NxPhysics *v7; // eax

  v3 = *((_DWORD *)this + 178);
  if ( v3 && *(_DWORD *)(v3 + 756) && *((_BYTE *)this + 696) )
    sub_101025C0(this);
  *((_DWORD *)this + 178) = a2;
  if ( a2 )
  {
    if ( *((_DWORD *)a2 + 189) && *((_BYTE *)this + 696) )
      sub_10104470(this);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v5 = *((_DWORD *)this + 97);
      if ( !v5 || i >= (*((_DWORD *)this + 98) - v5) >> 2 )
        break;
      v6 = *((_DWORD *)this + 97);
      if ( *(Actor **)(*(_DWORD *)(v6 + 4 * i) + 380) == this )
      {
        if ( !v6 || i >= (*((_DWORD *)this + 98) - v6) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 97) + 4 * i) + 380) = 0;
      }
    }
  }
  if ( *((_DWORD *)this + 155) )
  {
    v7 = NxPhysics::Instance();
    NxPhysics::DestroyNxActor(v7, (struct NxActor **)this + 155);
    *((_DWORD *)this + 155) = 0;
  }
  if ( *((_BYTE *)this + 213) )
  {
    if ( Actor::m_Callback_SetWorld )
      Actor::m_Callback_SetWorld(*((_DWORD *)this + 54), a2);
  }
}
