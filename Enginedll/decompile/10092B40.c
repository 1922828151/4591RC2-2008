/*
 * func-name: ?UpdateScreenSpaceMatrices@Gizmo@@IAEXAAVCamera@@@Z
 * func-address: 0x10092b40
 * callers: 0x10093cc0, 0x10094190
 * callees: 0x10091f30, 0x101189f0, 0x1017810a, 0x101786e0, 0x101a251c
 */

void __thiscall Gizmo::UpdateScreenSpaceMatrices(Gizmo *this, struct Camera *a2)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  _BYTE v5[24]; // [esp+28h] [ebp-118h] BYREF
  float v6[16]; // [esp+40h] [ebp-100h] BYREF
  _BYTE v7[64]; // [esp+80h] [ebp-C0h] BYREF
  _BYTE v8[64]; // [esp+C0h] [ebp-80h] BYREF
  float v9[16]; // [esp+100h] [ebp-40h] BYREF

  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 412))(
    v3,
    v8,
    90.0,
    *((float *)a2 + 99),
    *((float *)a2 + 100));
  v4 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v4 + 427) + 192))(*((_DWORD *)v4 + 427), v5);
  memset(v6, 0, sizeof(v6));
  sub_101786E0(1.0);
  v6[15] = 1.0;
  qmemcpy(v7, sub_10091F30(v9, (int)v5), sizeof(v7));
  D3DXMatrixMultiply((char *)this + 188, v6, (char *)this + 48);
  D3DXMatrixMultiply((char *)this + 188, (char *)this + 188, (char *)this + 112);
  D3DXMatrixMultiply((char *)this + 188, (char *)this + 188, v7);
  D3DXMatrixMultiply((char *)this + 252, v6, (char *)this + 48);
  D3DXMatrixMultiply((char *)this + 252, (char *)this + 252, v8);
  D3DXMatrixMultiply((char *)this + 252, (char *)this + 252, v7);
}
