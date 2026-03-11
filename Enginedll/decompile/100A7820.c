/*
 * func-name: ?addTexCam@C3DModel@@QAEXABVVector@@0@Z
 * func-address: 0x100a7820
 * callers: none
 * callees: 0x1016e600, 0x101a2534
 */

void __thiscall C3DModel::addTexCam(C3DModel *this, const struct Vector *a2, const struct Vector *a3)
{
  int v4; // ecx
  TextureCamera *v5; // eax
  TextureCamera *v6; // eax

  v4 = *((_DWORD *)this + 133);
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 80))(v4, 1);
  v5 = (TextureCamera *)operator new(0x1520u);
  if ( v5 )
    v6 = TextureCamera::TextureCamera(v5, *((struct World **)this + 261));
  else
    v6 = 0;
  *((_DWORD *)this + 133) = v6;
}
