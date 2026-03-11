/*
 * func-name: ?DeserializationComplete@Effect_TraceLineSystem@@UAEXXZ_0
 * func-address: 0x1009bac0
 * callers: 0x10005984
 * callees: 0x1000e7f5
 */

void __thiscall Effect_TraceLineSystem::DeserializationComplete(Effect_TraceLineSystem *this)
{
  int v2; // ecx
  int v3; // eax
  Editor *v4; // eax
  _DWORD v5[7]; // [esp-20h] [ebp-40h] BYREF
  int v6; // [esp-4h] [ebp-24h]
  float v7; // [esp+0h] [ebp-20h]
  float v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+8h] [ebp-18h]
  float v10; // [esp+Ch] [ebp-14h]
  float v11; // [esp+10h] [ebp-10h]
  int v12; // [esp+14h] [ebp-Ch]
  _DWORD *v13; // [esp+1Ch] [ebp-4h]

  v12 = 0;
  v11 = 0.0;
  v2 = *(_DWORD *)(*((_DWORD *)this + 270) + 344);
  v10 = 1.0;
  v9 = 1.0;
  v8 = 0.0;
  v7 = 0.0;
  v6 = 0;
  v3 = std::string::c_str(v2 + 100);
  v13 = v5;
  std::string::string(v5, v3);
  Texture::Load(
    *(_DWORD *)(*((_DWORD *)this + 270) + 344),
    v5[0],
    v5[1],
    v5[2],
    v5[3],
    v5[4],
    v5[5],
    v5[6],
    v6,
    LODWORD(v7),
    LODWORD(v8),
    LODWORD(v9),
    LODWORD(v10),
    LODWORD(v11),
    v12);
  Effect_TraceLineSystem::Refresh(this);
  v4 = (Editor *)Editor::Instance();
  if ( !Editor::GetEditorMode(v4) )
    *((float *)this + 205) = *((float *)this + 271);
  *((_BYTE *)this + 724) = 0;
  Actor::DeserializationComplete(this);
}
