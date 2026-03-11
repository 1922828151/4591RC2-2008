/*
 * func-name: ?Clone@ActorGroup@@QAE_NAAV1@PAVWorld@@@Z
 * func-address: 0x1010ab60
 * callers: 0x1010ae70
 * callees: 0x10011e50, 0x10012a30, 0x10050740, 0x10076ef0
 */

char __thiscall ActorGroup::Clone(ActorGroup *this, struct ActorGroup *a2, struct World *a3)
{
  struct ActorGroup *v3; // edi
  int v4; // eax
  unsigned int v7; // ebp
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int *v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  Actor *v16; // edi
  struct ActorGroup *v17; // edx
  int v18; // ecx
  char v19; // [esp-20h] [ebp-34h] BYREF
  int v20; // [esp-1Ch] [ebp-30h]
  int v21; // [esp-18h] [ebp-2Ch]
  int v22; // [esp-14h] [ebp-28h]
  int v23; // [esp-10h] [ebp-24h]
  int v24; // [esp-Ch] [ebp-20h]
  int v25; // [esp-8h] [ebp-1Ch]
  struct World *v26; // [esp-4h] [ebp-18h]
  int v27; // [esp+10h] [ebp-4h] BYREF

  v3 = a2;
  v4 = *((_DWORD *)a2 + 1);
  if ( v4 && (*((_DWORD *)a2 + 2) - v4) >> 2 )
    return 0;
  v7 = 0;
  if ( std::vector<Model *>::size(this) )
  {
    do
    {
      v8 = *((_DWORD *)this + 1);
      if ( !v8 || v7 >= (*((_DWORD *)this + 2) - v8) >> 2 )
        invalid_parameter_noinfo();
      v9 = *((_DWORD *)this + 1);
      v10 = 4 * v7;
      if ( *(_DWORD *)(4 * v7 + v9) )
      {
        if ( !v9 || v7 >= (*((_DWORD *)this + 2) - v9) >> 2 )
          invalid_parameter_noinfo();
        v11 = *(int **)(v10 + *((_DWORD *)this + 1));
        v12 = *v11;
        v26 = a3;
        v13 = (*(int (__thiscall **)(int *))(v12 + 100))(v11);
        v27 = (int)&v19;
        std::string::string(&v19, v13);
        v14 = Factory::create(v19, v20, v21, v22, v23, v24, v25, (int)v26);
        v15 = *((_DWORD *)this + 1);
        v16 = (Actor *)v14;
        v27 = v14;
        if ( !v15 || v7 >= (*((_DWORD *)this + 2) - v15) >> 2 )
          invalid_parameter_noinfo();
        (*(void (__thiscall **)(_DWORD, Actor *, int))(**(_DWORD **)(v10 + *((_DWORD *)this + 1)) + 84))(
          *(_DWORD *)(v10 + *((_DWORD *)this + 1)),
          v16,
          1);
        (*(void (__thiscall **)(Actor *))(*(_DWORD *)v16 + 12))(v16);
        std::vector<Actor *>::push_back(a2, &v27);
        v17 = a2;
        v18 = *((_DWORD *)a2 + 1);
        if ( !v18 || v7 >= (*((_DWORD *)a2 + 2) - v18) >> 2 )
        {
          invalid_parameter_noinfo();
          v17 = a2;
        }
        Actor::SetNULLOnDeath(v16, 0, (struct Actor **)(v10 + *((_DWORD *)v17 + 1)));
      }
      ++v7;
    }
    while ( v7 < std::vector<Model *>::size(this) );
    v3 = a2;
  }
  std::string::operator=((char *)v3 + 16, (char *)this + 16);
  return 1;
}
