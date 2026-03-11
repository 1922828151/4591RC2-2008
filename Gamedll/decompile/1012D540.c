/*
 * func-name: ?PostRender@HookEsbTake@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1012d540
 * callers: 0x1000df0d
 * callees: 0x102c0ed0
 */

void __thiscall HookEsbTake::PostRender(HookEsbTake *this, struct Camera *a2)
{
  Editor *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  float *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  float *v14; // [esp+10h] [ebp-48h]
  int v15; // [esp+28h] [ebp-30h]
  int v16; // [esp+2Ch] [ebp-2Ch]
  float v17; // [esp+2Ch] [ebp-2Ch]
  float v18; // [esp+2Ch] [ebp-2Ch]
  float v19; // [esp+30h] [ebp-28h]
  float v20; // [esp+34h] [ebp-24h]
  float v21; // [esp+38h] [ebp-20h]
  float v22; // [esp+3Ch] [ebp-1Ch]
  float v23[3]; // [esp+40h] [ebp-18h] BYREF
  _BYTE v24[12]; // [esp+4Ch] [ebp-Ch] BYREF

  v3 = (Editor *)Editor::Instance(v15, v16);
  if ( Editor::GetEditorMode(v3) )
  {
    if ( *((_DWORD *)this + 285) )
    {
      v4 = Canvas::Instance();
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v4 + 144))(
        v4,
        *((_DWORD *)this + 310) + 856,
        *((float *)this + 303),
        0.1,
        -16711936);
    }
    v5 = Canvas::Instance();
    (*(void (__thiscall **)(int, char *, _DWORD, _DWORD, int))(*(_DWORD *)v5 + 144))(
      v5,
      (char *)this + 856,
      *((float *)this + 301),
      *((float *)this + 302),
      -1);
    v6 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 92))(v6);
    if ( *((_DWORD *)this + 285) )
    {
      v7 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v7 + 96))(
        v7,
        (char *)this + 856,
        *((_DWORD *)this + 285) + 856,
        -16776961);
      v8 = Canvas::Instance();
      v17 = *((float *)this + 303);
      v9 = v8;
      v10 = (float *)sub_102C0ED0(v24);
      v20 = *v10 * v17;
      v21 = v10[1] * v17;
      v14 = (float *)(*((_DWORD *)this + 310) + 856);
      v22 = v17 * v10[2];
      v18 = *(float *)(*((_DWORD *)this + 310) + 860) + v21;
      v19 = *(float *)(*((_DWORD *)this + 310) + 864) + v22;
      v23[0] = v20 + *v14;
      v23[1] = v18;
      v23[2] = v19;
      (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v9 + 96))(v9, v14, v23, -16711936);
    }
    if ( *((_DWORD *)this + 300) )
    {
      v11 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v11 + 96))(
        v11,
        (char *)this + 856,
        *((_DWORD *)this + 300) + 856,
        -65536);
    }
    if ( *((_DWORD *)this + 310) )
    {
      v12 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v12 + 96))(
        v12,
        (char *)this + 856,
        *((_DWORD *)this + 310) + 856,
        -1);
    }
    v13 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 100))(v13);
  }
}
