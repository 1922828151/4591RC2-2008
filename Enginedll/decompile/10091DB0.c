/*
 * func-name: ?Initialize@Gizmo@@IAEXXZ
 * func-address: 0x10091db0
 * callers: 0x10094190, 0x10094d10
 * callees: 0x100dad30, 0x100db530, 0x101189f0, 0x101780b6, 0x101780e6, 0x101780ec, 0x1017eaef
 */

void __thiscall Gizmo::Initialize(Gizmo *this)
{
  int ControlHandle; // eax
  int **v3; // esi
  struct RenderDevice *v4; // eax
  int v5; // eax
  void (**v6)(void *, const char *, ...); // ebx
  int v7; // eax
  int v8; // ebx
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  int v11; // eax
  void (**v12)(void *, const char *, ...); // esi
  int v13; // eax
  float v14; // [esp+38h] [ebp-3Ch] BYREF
  float v15; // [esp+3Ch] [ebp-38h]
  float v16; // [esp+40h] [ebp-34h]
  int v17; // [esp+44h] [ebp-30h]
  int v18; // [esp+48h] [ebp-2Ch]
  char *v19; // [esp+4Ch] [ebp-28h]
  _DWORD *v20; // [esp+50h] [ebp-24h]
  _DWORD v21[2]; // [esp+60h] [ebp-14h] BYREF
  int v22; // [esp+70h] [ebp-4h]

  v21[1] = &v14;
  std::string::string(&v14, "MoveAlongPlane");
  v22 = 0;
  Input::Instance();
  v22 = -1;
  ControlHandle = Input::GetControlHandle(SLOBYTE(v14), LODWORD(v15), LODWORD(v16), v17, v18, v19, v20);
  v20 = 0;
  v3 = (int **)((char *)this + 816);
  v19 = (char *)this + 816;
  v18 = 15;
  v17 = 15;
  v16 = 3.0;
  *((_DWORD *)this + 90) = ControlHandle;
  v15 = 1.0;
  v14 = 0.0;
  v4 = RenderDevice::Instance();
  v5 = D3DXCreateCylinder(*((_DWORD *)v4 + 427), LODWORD(v14), LODWORD(v15), LODWORD(v16), v17, v18, v19, v20);
  if ( v5 < 0 )
  {
    v6 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
    v7 = sub_1017EAEF(v5);
    (*v6)(
      dword_11249F38,
      " Error: %s, in: D3DXCreateCylinder(RenderDevice::Instance()->dev,0,1.0f,3.0f,15,15,&m_pArrow,NULL)",
      v7);
  }
  v8 = **v3;
  v20 = v21;
  v9 = RenderDevice::Instance();
  (*(void (__stdcall **)(int *, int, int, _DWORD, _DWORD *))(v8 + 44))(*v3, 544, 18, *((_DWORD *)v9 + 427), v20);
  if ( *v3 )
  {
    (*(void (__stdcall **)(int *))(**v3 + 8))(*v3);
    *v3 = 0;
  }
  v20 = 0;
  v19 = (char *)v21[0];
  *v3 = (int *)v21[0];
  D3DXComputeNormals(v19, v20);
  v20 = 0;
  v19 = (char *)this + 820;
  *(float *)&v18 = 1.2;
  *(float *)&v17 = 1.2;
  v16 = 1.2;
  v10 = RenderDevice::Instance();
  v11 = D3DXCreateBox(*((_DWORD *)v10 + 427), LODWORD(v16), v17, v18, v19, v20);
  if ( v11 < 0 )
  {
    v12 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
    v13 = sub_1017EAEF(v11);
    (*v12)(
      dword_11249F38,
      " Error: %s, in: D3DXCreateBox(RenderDevice::Instance()->dev,1.2f,1.2f,1.2f,&m_pCube,NULL)",
      v13);
  }
}
