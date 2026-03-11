/*
 * func-name: ?OnCreateDevice@ShaderManager@@UAEXXZ
 * func-address: 0x10124f00
 * callers: none
 * callees: 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100971c0, 0x100e2550, 0x101189f0, 0x10124e50, 0x1017c0d0
 */

void __thiscall ShaderManager::OnCreateDevice(ShaderManager *this)
{
  LARGE_INTEGER *v2; // eax
  struct RenderDevice *v3; // eax
  CRETimer *v4; // eax
  char v5; // [esp-30h] [ebp-50h] BYREF
  int v6; // [esp-2Ch] [ebp-4Ch]
  int v7; // [esp-28h] [ebp-48h]
  int v8; // [esp-24h] [ebp-44h]
  int v9; // [esp-20h] [ebp-40h]
  int v10; // [esp-1Ch] [ebp-3Ch]
  int v11; // [esp-18h] [ebp-38h]
  char v12; // [esp-14h] [ebp-34h] BYREF
  int v13; // [esp-10h] [ebp-30h]
  int v14; // [esp-Ch] [ebp-2Ch]
  int v15; // [esp-8h] [ebp-28h]
  int v16; // [esp-4h] [ebp-24h]
  int v17; // [esp+0h] [ebp-20h]
  int v18; // [esp+4h] [ebp-1Ch]
  float v19; // [esp+Ch] [ebp-14h]
  char *v20; // [esp+10h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-4h]

  v19 = COERCE_FLOAT(&v12);
  std::string::string(&v12, &unk_101C9C36);
  v20 = &v5;
  v21 = 0;
  std::string::string(&v5, "UseConstantTable");
  LOBYTE(v21) = 1;
  Engine::Instance();
  v21 = -1;
  byte_112417B4 = sub_1017C0D0(v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18);
  v2 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v2);
  if ( *((_DWORD *)this + 49) )
  {
    (***((void (__thiscall ****)(_DWORD))this + 49))(*((_DWORD *)this + 49));
    ShaderManager::RegisterSharedTexture(this, "tNormalizer", (struct Texture *)(*((_DWORD *)this + 49) + 4));
  }
  v3 = RenderDevice::Instance();
  if ( !(*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 356))(v3) && *((_DWORD *)this + 50) )
  {
    (***((void (__thiscall ****)(_DWORD))this + 50))(*((_DWORD *)this + 50));
    ShaderManager::RegisterSharedTexture(this, "tPointFalloff", (struct Texture *)(*((_DWORD *)this + 50) + 4));
  }
  v4 = REGetGlobalTimer();
  v19 = CRETimer::StopMiniTimer(v4);
  LogPrintf("\tShader resource load took %f MS", v19);
}
