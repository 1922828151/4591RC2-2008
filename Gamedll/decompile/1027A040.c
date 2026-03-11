/*
 * func-name: sub_1027A040
 * func-address: 0x1027a040
 * callers: 0x100081a7
 * callees: 0x1000194c, 0x10011abd, 0x10015f91, 0x102c9fe0
 */

int __thiscall sub_1027A040(float *this, float a2)
{
  int v3; // edi
  int *v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  double v11; // st7
  unsigned int v12; // eax
  int v13; // edi
  double v14; // st7
  double v15; // st6
  double v16; // st7
  bool v17; // zf
  signed int v18; // ecx
  double v19; // rt1
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v27; // [esp+8h] [ebp-1Ch]
  int v28; // [esp+Ch] [ebp-18h]
  int v29; // [esp+Ch] [ebp-18h]
  int v30; // [esp+Ch] [ebp-18h]
  float v31; // [esp+1Ch] [ebp-8h]
  float v32; // [esp+20h] [ebp-4h]
  float v33; // [esp+20h] [ebp-4h]
  float v34; // [esp+20h] [ebp-4h]
  float v35; // [esp+20h] [ebp-4h]

  v3 = GUISystem::Instance(v28);
  v4 = (int *)GUISystem::Instance(v29);
  v5 = *v4;
  v6 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v3 + 76))(v3, this);
  (*(void (__thiscall **)(int *, int))(v5 + 60))(v4, v6);
  if ( *(float *)&GSeconds - this[995] > 5.0 )
  {
    this[995] = *(float *)&GSeconds;
    v7 = sub_1000194C(0);
    if ( v7 )
    {
      sub_10011ABD(*(_DWORD *)(v7 + 4), v30);
      sub_10015F91(v27);
    }
  }
  v8 = *(float *)&GSeconds - this[995];
  v32 = v8 + v8;
  v9 = (int)v32;
  v10 = v9;
  v11 = v32 - (double)v9;
  v12 = ((int)(((unsigned __int64)(1431655765LL * v9) >> 32) - v9) >> 1)
      + ((unsigned int)(((unsigned __int64)(1431655765LL * v9) >> 32) - v9) >> 31);
  v13 = v12 + (int)v32 + 2 * v12;
  v33 = v11;
  v14 = v33;
  v34 = 1.0 - v33;
  *(float *)(LODWORD(this[v13 + 972]) + 528) = v34;
  v15 = v14;
  v16 = v34;
  *(float *)(LODWORD(this[(v13 + 2) % 3 + 972]) + 528) = v15;
  v18 = v10 & 0x80000001;
  v17 = v18 == 0;
  *(float *)(LODWORD(this[(v13 + 1) % 3 + 972]) + 528) = 1.0;
  if ( v18 < 0 )
    v17 = (((_BYTE)v18 - 1) | 0xFFFFFFFE) == -1;
  if ( v17 )
  {
    v19 = v15;
    v15 = v34;
    v16 = v19;
  }
  v20 = (int *)(this + 975);
  v21 = 5;
  do
  {
    v22 = *v20;
    v20 += 2;
    v31 = v15;
    *(float *)(v22 + 528) = v31;
    --v21;
  }
  while ( v21 );
  v23 = (int *)(this + 976);
  v24 = 5;
  do
  {
    v25 = *v23;
    v23 += 2;
    v35 = v16;
    *(float *)(v25 + 528) = v35;
    --v24;
  }
  while ( v24 );
  return CTYDialog::OnRender((CTYDialog *)this, a2);
}
