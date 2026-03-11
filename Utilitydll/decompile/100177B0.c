/*
 * func-name: ??1Singleton_Manager@Utility@Outpop@@QAE@XZ
 * func-address: 0x100177b0
 * callers: 0x10017880
 * callees: 0x10006700, 0x10018cf2
 */

void __thiscall Outpop::Utility::Singleton_Manager::~Singleton_Manager(Outpop::Utility::Singleton_Manager *this)
{
  int v2; // eax
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  int v5; // eax
  _DWORD **v6; // edi

  while ( *((_DWORD *)this + 2) )
  {
    v2 = *((_DWORD *)this + 1);
    v3 = *(_DWORD *)(v2 + 4);
    if ( v3 == v2 )
      invalid_parameter_noinfo();
    if ( v3 == *((_DWORD *)this + 1) )
      invalid_parameter_noinfo();
    v4 = *(void (__thiscall ****)(_DWORD, int))(v3 + 8);
    if ( v4 )
      (**v4)(v4, 1);
    v5 = *((_DWORD *)this + 1);
    v6 = *(_DWORD ***)(v5 + 4);
    if ( v6 == (_DWORD **)v5 )
      invalid_parameter_noinfo();
    if ( v6 == *((_DWORD ***)this + 1) )
    {
      invalid_parameter_noinfo();
      if ( v6 == *((_DWORD ***)this + 1) )
        continue;
    }
    *v6[1] = *v6;
    (*v6)[1] = v6[1];
    operator delete(v6);
    --*((_DWORD *)this + 2);
  }
  sub_10006700((int)this);
}
