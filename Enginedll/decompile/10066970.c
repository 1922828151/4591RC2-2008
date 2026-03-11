/*
 * func-name: ?Line3D@Canvas@@UAEXAAVVector@@0K@Z
 * func-address: 0x10066970
 * callers: none
 * callees: 0x100956d0, 0x101189f0
 */

void __thiscall Canvas::Line3D(Canvas *this, struct Vector *a2, struct Vector *a3, unsigned int a4)
{
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  struct RenderDevice *v9; // eax
  _DWORD v10[12]; // [esp+18h] [ebp-30h] BYREF

  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  v10[2] = *((_DWORD *)a2 + 2);
  v10[0] = v4;
  *(float *)&v10[4] = 0.0;
  v10[1] = v5;
  v6 = *((_DWORD *)a3 + 1);
  *(float *)&v10[5] = 0.0;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 2);
  v10[7] = v6;
  v10[8] = v8;
  v10[3] = a4;
  v10[6] = v7;
  v10[9] = a4;
  *(float *)&v10[10] = 0.0;
  *(float *)&v10[11] = 0.0;
  v9 = RenderDevice::Instance();
  if ( (*(int (__thiscall **)(struct RenderDevice *, int, int, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)v9 + 420))(
         v9,
         2,
         1,
         v10,
         24,
         0,
         0) < 0 )
    Error("Can't Draw 3D Line");
}
