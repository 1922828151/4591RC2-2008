/*
 * func-name: ?GetUnderMouse@Editor@@IAEPAVActor@@PAVWorld@@AAVVector@@1_N@Z
 * func-address: 0x10085cc0
 * callers: 0x10088cd0, 0x1008c3e0
 * callees: 0x10080780, 0x100822b0, 0x10084530, 0x101a2516
 */

struct Actor *__thiscall Editor::GetUnderMouse(
        Editor *this,
        struct World *a2,
        struct Vector *a3,
        struct Vector *a4,
        bool a5)
{
  struct Actor *result; // eax
  float *v8; // ebx
  double v9; // st7
  double v10; // st5
  double v11; // st6
  float v12; // [esp+4h] [ebp-18h] BYREF
  float v13; // [esp+8h] [ebp-14h]
  float v14; // [esp+Ch] [ebp-10h]
  float v15; // [esp+10h] [ebp-Ch]
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+18h] [ebp-4h]
  struct Vector *v18; // [esp+28h] [ebp+Ch]
  float *v19; // [esp+2Ch] [ebp+10h]
  float v20; // [esp+2Ch] [ebp+10h]
  float v21; // [esp+2Ch] [ebp+10h]
  float v22; // [esp+2Ch] [ebp+10h]
  float v23; // [esp+2Ch] [ebp+10h]

  v12 = 100000000.0;
  v13 = 100000000.0;
  v14 = 100000000.0;
  v18 = Editor::CheckActors(this, a2, a3, a4, &v12, a5);
  v19 = (float *)Editor::CheckLights(this, a2, a3, a4);
  result = Editor::CheckScripts(this, a2, a3, a4);
  v8 = v19;
  if ( v19 )
  {
    v15 = *((float *)this + 151) - v19[214];
    v16 = *((float *)this + 152) - v19[215];
    v17 = *((float *)this + 153) - v19[216];
    v20 = v16 * v16 + v15 * v15 + v17 * v17;
    v21 = sqrt(v20);
    v13 = v21 - 0.01999999955296516;
  }
  if ( result )
  {
    v15 = *((float *)this + 151) - *((float *)result + 214);
    v16 = *((float *)this + 152) - *((float *)result + 215);
    v17 = *((float *)this + 153) - *((float *)result + 216);
    v22 = v16 * v16 + v15 * v15 + v17 * v17;
    v23 = sqrt(v22);
    v14 = v23 - 0.009999999776482582;
  }
  v9 = v12;
  if ( v13 > (double)v12 && v14 > v9 )
    return v18;
  v10 = v13;
  v11 = v14;
  if ( v13 < v9 && v10 < v11 )
    return (struct Actor *)v8;
  if ( v12 <= v11 || v11 >= v10 )
    return 0;
  return result;
}
