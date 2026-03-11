/*
 * func-name: ?PreRender@TextureCamera@@UAEXPAVCamera@@@Z
 * func-address: 0x1016e310
 * callers: none
 * callees: 0x1004dd00, 0x100e2550, 0x100e2f30, 0x100e3ef0, 0x10121b80, 0x10138880, 0x1016dcd0, 0x1017816a
 */

void __userpurge TextureCamera::PreRender(TextureCamera *this@<ecx>, int *a2@<edi>, char *a3@<esi>, struct Camera *a4)
{
  struct MaterialManager *v5; // eax
  int Material; // eax
  double v7; // st7
  int v8[7]; // [esp-1Ch] [ebp-3Ch] BYREF
  int v9; // [esp+0h] [ebp-20h] BYREF
  float v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+1Ch] [ebp-4h]

  if ( *((_DWORD *)this + 381) != 1 )
  {
    if ( !*((_DWORD *)this + 397) || (unsigned __int8)std::operator!=<char>((char *)this + 1560, (char *)this + 1532) )
    {
      v10 = COERCE_FLOAT(v8);
      std::string::string(v8, (char *)this + 1532);
      v11 = 0;
      v5 = MaterialManager::Instance();
      v11 = -1;
      Material = MaterialManager::FindMaterial(v5, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6]);
      *((_DWORD *)this + 397) = Material;
      if ( Material )
      {
        Shader::SetRenderTarget(*(Shader **)(Material + 152), *((void **)this + 270));
        std::string::operator=((char *)this + 1560, (char *)this + 1532);
      }
      else
      {
        qmemcpy(v8, (char *)this + 1532, sizeof(v8));
        a3 = (char *)this + 1560;
        a2 = &v9;
        LogPrintf("Can't find material %s");
        std::string::operator=((char *)this + 1532, &unk_101CE627);
      }
    }
    if ( !*((_BYTE *)this + 1052) )
      World::Tick((TextureCamera *)((char *)this + 1608));
    v10 = GDeltaTime + *((float *)this + 400);
    v7 = v10;
    *((float *)this + 400) = v10;
    if ( *((float *)this + 382) < v7 )
    {
      *((float *)this + 400) = 0.0;
      TextureCamera::RenderNow(this, (int)this, (int)a2, (int)a3);
    }
    if ( *((float *)this + 398) != *((float *)this + 399) )
    {
      (*(void (__thiscall **)(char *))(*((_DWORD *)this + 264) + 4))((char *)this + 1056);
      *((float *)this + 398) = *((float *)this + 399);
    }
    if ( *((_BYTE *)this + 5404) )
    {
      TextureCamera::RenderNow(this, (int)this, (int)a2, (int)a3);
      D3DXSaveTextureToFileA("C:\\Ret.dds", 4, *((_DWORD *)this + 270), 0);
      *((_BYTE *)this + 5404) = 0;
    }
    Actor::PreRender(this, a4);
  }
}
