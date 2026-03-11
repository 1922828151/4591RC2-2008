/*
 * func-name: ?SetPhysicsProperties@PhysicsParticles@@UAEXH_NMMHHHM@Z_0
 * func-address: 0x100ba020
 * callers: 0x10019628
 * callees: 0x1000ab32
 */

void __userpurge PhysicsParticles::SetPhysicsProperties(
        PhysicsParticles *this@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        bool a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        float a12)
{
  char v13; // cl
  NxPhysics *v14; // eax
  NxPhysics *v15; // eax
  NxPhysics *v16; // eax
  unsigned int v17; // ebx
  int v18; // ebp
  int v19; // eax
  int v20; // esi
  int v21; // [esp+4h] [ebp-18h]
  bool v22; // [esp+4h] [ebp-18h]
  int v23; // [esp+4h] [ebp-18h]
  int v24; // [esp+8h] [ebp-14h]
  int v25; // [esp+8h] [ebp-14h]
  int v27; // [esp+Ch] [ebp-10h]
  int v28; // [esp+Ch] [ebp-10h]
  float v29; // [esp+10h] [ebp-Ch] BYREF
  float v30; // [esp+14h] [ebp-8h]
  float v31; // [esp+18h] [ebp-4h]

  v13 = 0;
  *((float *)this + 93) = a12;
  if ( a10 != *((_DWORD *)this + 90) )
  {
    *((_DWORD *)this + 90) = a10;
    v13 = 1;
  }
  if ( a11 != *((_DWORD *)this + 91) )
  {
    *((_DWORD *)this + 91) = a11;
    v13 = 1;
  }
  if ( *((float *)this + 95) != a7 )
  {
    *((float *)this + 95) = a7;
    v13 = 1;
  }
  if ( a8 != *((float *)this + 92) )
  {
    *((float *)this + 92) = a8;
    v13 = 1;
  }
  if ( *((_DWORD *)this + 94) != a9 )
  {
    *((_DWORD *)this + 94) = a9;
    v13 = 1;
  }
  if ( a6 == *((_BYTE *)this + 356) )
  {
    if ( !v13 )
      return;
  }
  else
  {
    *((_BYTE *)this + 356) = a6;
  }
  PhysicsParticles::DestroyPhysics(this);
  (*(void (__thiscall **)(PhysicsParticles *, _DWORD))(*(_DWORD *)this + 36))(this, *((_DWORD *)this + 54));
  if ( *((_BYTE *)this + 357) )
  {
    v14 = (NxPhysics *)NxPhysics::Instance(a4, a2, a3, LODWORD(v29), LODWORD(v30));
    NxPhysics::FlushScene(v14);
    v15 = (NxPhysics *)NxPhysics::Instance(0, v21, v24, v27, LODWORD(v29));
    NxPhysics::UpdateScene(v15, v22);
    v16 = (NxPhysics *)NxPhysics::Instance(v23, v25, v28, LODWORD(v29), LODWORD(v30));
    NxPhysics::FlushScene(v16);
  }
  v17 = 0;
  if ( *((int *)this + 51) > 0 )
  {
    v18 = 0;
    do
    {
      v19 = *((_DWORD *)this + 48);
      if ( !v19 || v17 >= (*((_DWORD *)this + 49) - v19) / 96 )
        _invalid_parameter_noinfo();
      v20 = v18 + *((_DWORD *)this + 48);
      (*(void (__thiscall **)(PhysicsParticles *, int))(*(_DWORD *)this + 56))(this, v20);
      v29 = *(float *)v20;
      v30 = *(float *)(v20 + 4);
      v31 = *(float *)(v20 + 8);
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v20 + 92) + 24))(*(_DWORD *)(v20 + 92), &v29);
      v29 = *(float *)(v20 + 24);
      v30 = *(float *)(v20 + 28);
      v31 = *(float *)(v20 + 32);
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v20 + 92) + 224))(*(_DWORD *)(v20 + 92), &v29);
      ++v17;
      v18 += 96;
    }
    while ( (signed int)v17 < *((_DWORD *)this + 51) );
  }
}
