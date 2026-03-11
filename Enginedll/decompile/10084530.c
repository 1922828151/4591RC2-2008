/*
 * func-name: ?CheckActors@Editor@@IAEPAVActor@@PAVWorld@@AAVVector@@1AAM_N@Z
 * func-address: 0x10084530
 * callers: 0x10085cc0
 * callees: 0x10012a30, 0x100244d0, 0x10024540, 0x1002aac0, 0x1013fff0
 */

struct Actor *__thiscall Editor::CheckActors(
        Editor *this,
        struct World *a2,
        struct Vector *a3,
        struct Vector *a4,
        float *a5,
        bool a6)
{
  int v8; // eax
  int v9; // eax
  int v10; // esi
  void *v12[2]; // [esp+Ch] [ebp-74h] BYREF
  double v13; // [esp+14h] [ebp-6Ch]
  int v14[13]; // [esp+4Ch] [ebp-34h] BYREF
  float v15; // [esp+94h] [ebp+14h]

  if ( a6
    && (GSeconds - flt_10285778 > 2.5 || (v8 = *((_DWORD *)this + 562)) != 0 && (*((_DWORD *)this + 563) - v8) >> 2) )
  {
    std::vector<Actor *>::resize(&dword_10285780, 0, 0);
  }
  CollisionInfo::CollisionInfo((CollisionInfo *)v12);
  v14[12] = 0;
  if ( a6 )
    World::CollisionCheckRay(0, a3, a4, 10, v12, 1, &dword_10285780);
  else
    World::CollisionCheckRay(0, a3, a4, 10, v12, 1, 0);
  if ( v14[0] )
  {
    v15 = v13;
    *a5 = v15;
    if ( a6 )
    {
      if ( flt_10285774 > (double)v15 || (v9 = *((_DWORD *)this + 562)) != 0 && (*((_DWORD *)this + 563) - v9) >> 2 )
        std::vector<Actor *>::resize(&dword_10285780, 0, 0);
      flt_10285774 = *a5;
      std::vector<Actor *>::push_back(&dword_10285780, v14);
      flt_10285778 = GSeconds;
    }
  }
  else if ( a6 )
  {
    std::vector<Actor *>::resize(&dword_10285780, 0, 0);
    flt_10285774 = 0.0;
  }
  v10 = v14[0];
  CollisionInfo::~CollisionInfo(v12);
  return (struct Actor *)v10;
}
