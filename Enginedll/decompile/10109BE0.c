/*
 * func-name: ?Destroy@ActorGroup@@QAEXXZ
 * func-address: 0x10109be0
 * callers: 0x100cfe70, 0x1010d330
 * callees: 0x1004eb70, 0x10076ef0, 0x1010f560
 */

void __thiscall ActorGroup::Destroy(ActorGroup *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  struct Actor **v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char *v11; // ebx
  char *v12; // edi
  int v13; // eax
  char *v14; // ebp
  ActorGroup *v15; // [esp+10h] [ebp-4h] BYREF

  for ( i = 0; i < std::vector<Model *>::size(this); ++i )
  {
    v3 = *((_DWORD *)this + 1);
    if ( !v3 || i >= (*((_DWORD *)this + 2) - v3) >> 2 )
      invalid_parameter_noinfo();
    v4 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(v4 + 4 * i) )
    {
      if ( !v4 || i >= (*((_DWORD *)this + 2) - v4) >> 2 )
        invalid_parameter_noinfo();
      v5 = *((_DWORD *)this + 1);
      v6 = (struct Actor **)(v5 + 4 * i);
      if ( !v5 || i >= (*((_DWORD *)this + 2) - v5) >> 2 )
        invalid_parameter_noinfo();
      Actor::DontSetNULLOnDeath(*(Actor **)(*((_DWORD *)this + 1) + 4 * i), 0, v6);
      v7 = *((_DWORD *)this + 1);
      if ( !v7 || i >= (*((_DWORD *)this + 2) - v7) >> 2 )
        invalid_parameter_noinfo();
      v8 = *((_DWORD *)this + 1);
      if ( *(_DWORD *)(v8 + 4 * i) )
      {
        if ( !v8 || i >= (*((_DWORD *)this + 2) - v8) >> 2 )
          invalid_parameter_noinfo();
        v9 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i);
        if ( v9 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 80))(v9, 1);
        v10 = *((_DWORD *)this + 1);
        if ( !v10 || i >= (*((_DWORD *)this + 2) - v10) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) = 0;
      }
    }
  }
  v11 = (char *)*((_DWORD *)this + 2);
  if ( *((_DWORD *)this + 1) > (unsigned int)v11 )
    invalid_parameter_noinfo();
  v12 = (char *)*((_DWORD *)this + 1);
  if ( (unsigned int)v12 > *((_DWORD *)this + 2) )
    invalid_parameter_noinfo();
  if ( v12 != v11 )
  {
    v13 = (*((_DWORD *)this + 2) - (int)v11) >> 2;
    v14 = &v12[4 * v13];
    if ( v13 > 0 )
      memmove_s(v12, 4 * v13, v11, 4 * v13);
    *((_DWORD *)this + 2) = v14;
  }
  v15 = this;
  sub_1010F560(&v15);
}
