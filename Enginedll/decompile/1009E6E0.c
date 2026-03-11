/*
 * func-name: ?Scale@ModelFrame@@QAEXAAVVector@@@Z
 * func-address: 0x1009e6e0
 * callers: 0x1009e6e0, 0x100ee2c0
 * callees: 0x1000bc40, 0x10077b70, 0x10078420, 0x1009e6e0, 0x10178720
 */

void __thiscall ModelFrame::Scale(ModelFrame *this, struct Vector *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  float *v14; // eax
  ModelFrame *v15; // ecx
  float v16[16]; // [esp+1Ch] [ebp-40h] BYREF

  do
  {
    *((float *)this + 37) = *((float *)this + 37) * *(float *)a2;
    *((float *)this + 38) = *((float *)this + 38) * *((float *)a2 + 1);
    *((float *)this + 39) = *((float *)this + 39) * *((float *)a2 + 2);
    *((float *)this + 53) = *((float *)this + 53) * *(float *)a2;
    *((float *)this + 54) = *((float *)this + 54) * *((float *)a2 + 1);
    *((float *)this + 55) = *((float *)a2 + 2) * *((float *)this + 55);
    v3 = *((_DWORD *)this + 1);
    if ( v3 && (*((_DWORD *)this + 2) - v3) >> 2 && **((_DWORD **)this + 1) )
    {
      sub_1000BC40(v16);
      sub_10178720(*(float *)a2, *((float *)a2 + 1), *((float *)a2 + 2));
      v4 = *((_DWORD *)this + 1);
      if ( v4 && (*((_DWORD *)this + 2) - v4) >> 2 )
        v5 = **((_DWORD **)this + 1);
      else
        v5 = 0;
      (**(void (__thiscall ***)(struct MeshOps *, int, int, float *))MeshOps::Instance)(MeshOps::Instance, v5, 4, v16);
      v6 = (_DWORD *)*((_DWORD *)this + 113);
      if ( v6 )
      {
        sub_10077B70(v6);
        v7 = *((_DWORD *)this + 1);
        if ( v7 && (*((_DWORD *)this + 2) - v7) >> 2 )
          v8 = **((_DWORD **)this + 1);
        else
          v8 = 0;
        sub_10078420(*((_DWORD *)this + 113), (int)a2, v8);
      }
      v9 = 0;
      while ( 1 )
      {
        v10 = *((_DWORD *)this + 1);
        if ( v10 && (*((_DWORD *)this + 2) - v10) >> 2 )
          v11 = **((_DWORD **)this + 1);
        else
          v11 = 0;
        if ( v9 >= (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) )
          break;
        v12 = *((_DWORD *)this + 1);
        if ( v12 && (*((_DWORD *)this + 2) - v12) >> 2 )
          v13 = **((_DWORD **)this + 1);
        else
          v13 = 0;
        v14 = (float *)(*(int (__stdcall **)(_DWORD, int))(**(_DWORD **)(v13 + 12) + 68))(*(_DWORD *)(v13 + 12), v9++);
        v14[12] = v14[12] * *(float *)a2;
        v14[13] = v14[13] * *((float *)a2 + 1);
        v14[14] = *((float *)a2 + 2) * v14[14];
      }
    }
    v15 = (ModelFrame *)*((_DWORD *)this + 89);
    if ( v15 )
      ModelFrame::Scale(v15, a2);
    this = (ModelFrame *)*((_DWORD *)this + 90);
  }
  while ( this );
}
