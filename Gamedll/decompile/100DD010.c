/*
 * func-name: ?Unproject@CameraHandler@@QAE?AVVector@@V2@@Z_0
 * func-address: 0x100dd010
 * callers: 0x1000f31c
 * callees: 0x102c954c
 */

float *__thiscall CameraHandler::Unproject(void *this, float *a2, char a3, int a4, int a5)
{
  Editor *v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp+0h] [ebp-E0h]
  int v11; // [esp+0h] [ebp-E0h]
  int v12; // [esp+4h] [ebp-DCh]
  int v13; // [esp+4h] [ebp-DCh]
  float v14[16]; // [esp+8h] [ebp-D8h] BYREF
  _BYTE v15[24]; // [esp+48h] [ebp-98h] BYREF
  _BYTE v16[64]; // [esp+60h] [ebp-80h] BYREF
  _BYTE v17[64]; // [esp+A0h] [ebp-40h] BYREF

  v6 = (Editor *)Editor::Instance(v10, v12);
  if ( Editor::GetEditorMode(v6) )
    v7 = Editor::Instance(v11, v13) + 252;
  else
    v7 = (int)this;
  v14[14] = 0.0;
  v14[13] = 0.0;
  v14[12] = 0.0;
  v14[11] = 0.0;
  v14[9] = 0.0;
  v14[8] = 0.0;
  v14[7] = 0.0;
  v14[6] = 0.0;
  v14[4] = 0.0;
  v14[3] = 0.0;
  v14[2] = 0.0;
  v14[1] = 0.0;
  v14[15] = 1.0;
  v14[10] = 1.0;
  v14[5] = 1.0;
  v14[0] = 1.0;
  qmemcpy(v16, (const void *)(v7 + 220), sizeof(v16));
  qmemcpy(v17, (const void *)(v7 + 156), sizeof(v17));
  v8 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**(_DWORD **)(v8 + 1708) + 192))(*(_DWORD *)(v8 + 1708), v15);
  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  D3DXVec3Unproject(a2, &a3, v15, v17, v16, v14);
  return a2;
}
