/*
 * func-name: ?CloneAnimation@Model@@QAEHPAV1@H@Z
 * func-address: 0x100f2f70
 * callers: none
 * callees: 0x1003e700, 0x100f1b70, 0x1017eaef
 */

int __userpurge Model::CloneAnimation@<eax>(
        Model *this@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        struct Model *a4,
        unsigned int a5)
{
  bool v6; // zf
  int v7; // eax
  _DWORD *v8; // ebp
  unsigned int v9; // esi
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // esi
  int v14; // eax
  Model *v15; // esi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v20; // [esp+10h] [ebp-18h] BYREF
  Model *v21; // [esp+14h] [ebp-14h]
  int v22; // [esp+18h] [ebp-10h]
  unsigned int v23; // [esp+1Ch] [ebp-Ch]
  int v24; // [esp+20h] [ebp-8h]
  int v25; // [esp+24h] [ebp-4h]

  v6 = *((_DWORD *)this + 94) == 0;
  v21 = this;
  if ( v6 )
    Model::InitializeAnimationSystem(this, a2, a3, 0);
  v7 = *((_DWORD *)this + 96);
  v8 = (_DWORD *)((char *)this + 380);
  if ( v7 )
    v9 = (v8[2] - v7) >> 4;
  else
    v9 = 0;
  LOBYTE(v25) = 0;
  sub_1003E700(v8, v9 + 1, v22, v23, v24, v25);
  v10 = *((_DWORD *)a4 + 96);
  if ( !v10 || a5 >= (*((_DWORD *)a4 + 97) - v10) >> 4 )
    invalid_parameter_noinfo();
  v11 = v8[1];
  v12 = (_DWORD *)(*((_DWORD *)a4 + 96) + 16 * a5);
  if ( !v11 || v9 >= (v8[2] - v11) >> 4 )
    invalid_parameter_noinfo();
  v13 = (_DWORD *)(v8[1] + 16 * v9);
  *v13 = *v12;
  v13[1] = v12[1];
  v13[2] = v12[2];
  v13[3] = v12[3];
  v14 = *((_DWORD *)a4 + 94);
  v20 = 0;
  (*(void (__stdcall **)(int, unsigned int, int *))(*(_DWORD *)v14 + 44))(v14, a5, &v20);
  v15 = v21;
  v16 = (*(int (__stdcall **)(_DWORD, int))(**((_DWORD **)v21 + 94) + 32))(*((_DWORD *)v21 + 94), v20);
  if ( v16 < 0 )
  {
    v17 = *(_DWORD *)dword_11249F38;
    v18 = sub_1017EAEF(v16);
    (*(void (**)(void *, const char *, ...))(v17 + 4))(
      dword_11249F38,
      " Error: %s, in: m_AnimationController->RegisterAnimationSet(pAnimSet)",
      v18);
  }
  return (*(int (__stdcall **)(_DWORD))(**((_DWORD **)v15 + 94) + 40))(*((_DWORD *)v15 + 94)) - 1;
}
