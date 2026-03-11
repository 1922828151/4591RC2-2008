/*
 * func-name: ?DestroyPhysics@PhysicsParticles@@IAEXXZ_0
 * func-address: 0x100b9e10
 * callers: 0x1000ab32
 * callees: none
 */

void __thiscall PhysicsParticles::DestroyPhysics(PhysicsParticles *this)
{
  unsigned int v1; // ebx
  int i; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi
  NxPhysics *v8; // eax
  int v9; // [esp+0h] [ebp-10h]
  struct NxActor **v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+4h] [ebp-Ch]
  int v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  v1 = 0;
  for ( i = 0; ; i += 96 )
  {
    v4 = *((_DWORD *)this + 48);
    if ( !v4 || v1 >= (*((_DWORD *)this + 49) - v4) / 96 )
      break;
    v5 = *((_DWORD *)this + 48);
    if ( !v5 || v1 >= (*((_DWORD *)this + 49) - v5) / 96 )
      _invalid_parameter_noinfo();
    v6 = i + *((_DWORD *)this + 48);
    v7 = (_DWORD *)(v6 + 92);
    if ( *(_DWORD *)(v6 + 92) )
    {
      v8 = (NxPhysics *)NxPhysics::Instance(v6 + 92, v9, v11, v12, v13);
      NxPhysics::DestroyNxActor(v8, v10);
      *v7 = 0;
    }
    ++v1;
  }
}
