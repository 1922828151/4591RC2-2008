/*
 * func-name: ?PostRender@Terrain@@UAEXPAVCamera@@@Z
 * func-address: 0x10169d00
 * callers: none
 * callees: 0x1000f2e0, 0x10012a30, 0x1001a3d0, 0x100244d0, 0x10024540, 0x1004c3d0, 0x1004dd10, 0x1007ec70, 0x1007f3a0, 0x1007fc40, 0x1007fec0, 0x1008bd00, 0x10091b60, 0x100dad30, 0x100db0e0, 0x1010fea0, 0x1013fff0, 0x1015d190, 0x1015db70, 0x1015de80, 0x1015e240, 0x1015eca0, 0x10164f30, 0x10167bb0, 0x10168ec0, 0x1016a1b0
 */

void __thiscall Terrain::PostRender(Terrain *this, struct Camera *a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  struct Editor *v4; // eax
  struct Editor *v5; // eax
  struct Vector *v6; // eax
  Input *v7; // eax
  struct Vector *v8; // eax
  struct Vector *v9; // eax
  struct Vector *v10; // eax
  int v11; // ebx
  int v12; // eax
  int i; // edi
  struct TerrainNode *Node; // eax
  TerrainNode *v15; // ebp
  int v16; // eax
  Editor *v17; // eax
  int *v18; // ecx
  int v19; // eax
  Editor *v20; // eax
  int v21; // eax
  int v22; // [esp-18h] [ebp-138h]
  int v23; // [esp-14h] [ebp-134h]
  int v24; // [esp+0h] [ebp-120h] BYREF
  int v25; // [esp+4h] [ebp-11Ch] BYREF
  float v26; // [esp+8h] [ebp-118h]
  float v27; // [esp+Ch] [ebp-114h]
  int v28; // [esp+10h] [ebp-110h]
  float v29; // [esp+14h] [ebp-10Ch]
  int v30[4]; // [esp+18h] [ebp-108h] BYREF
  float v31[3]; // [esp+28h] [ebp-F8h] BYREF
  float v32[3]; // [esp+34h] [ebp-ECh] BYREF
  _DWORD v33[15]; // [esp+40h] [ebp-E0h] BYREF
  _DWORD v34[6]; // [esp+7Ch] [ebp-A4h] BYREF
  _DWORD v35[6]; // [esp+94h] [ebp-8Ch] BYREF
  double v36[4]; // [esp+ACh] [ebp-74h] BYREF
  _DWORD v37[20]; // [esp+CCh] [ebp-54h] BYREF
  int v38; // [esp+11Ch] [ebp-4h]

  v38 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v37[19] = &loc_101B6623;
  v37[18] = ExceptionList;
  if ( *((_BYTE *)Editor::Instance() + 2056)
    && *((_BYTE *)Editor::Instance() + 2072)
    && (*((_DWORD *)Editor::Instance() + 533) == 1
     || *((_DWORD *)Editor::Instance() + 533) == 2
     || *((_DWORD *)Editor::Instance() + 533) == 3) )
  {
    v29 = *((float *)Editor::Instance() + 516);
    v24 = *((int *)Editor::Instance() + 517);
    *(float *)&v25 = v29;
    v26 = *(float *)&v24;
    v27 = 0.0;
    v4 = Editor::Instance();
    Editor::Unproject((int)v4, v32, SLOBYTE(v29), v24, COERCE_INT(0.0));
    v24 = *((int *)Editor::Instance() + 516);
    v29 = *((float *)Editor::Instance() + 517);
    v25 = v24;
    v26 = v29;
    v27 = 1.0;
    v5 = Editor::Instance();
    Editor::Unproject((int)v5, v31, v24, SLODWORD(v29), COERCE_INT(1.0));
    CollisionInfo::CollisionInfo((CollisionInfo *)v36);
    v38 = 0;
    if ( !World::CollisionCheckRay(0, (int)v32, (int)v31, 12, v36, 1, 0) )
      goto LABEL_29;
    v6 = (struct Vector *)sub_1004C3D0(v37, 0);
    Terrain::DrawEditLine(this, v6);
    v22 = *((_DWORD *)this + 383);
    v7 = Input::Instance();
    if ( Input::ControlDown(v7, v22, 0) && *((_DWORD *)this + 293) )
    {
      if ( *((_DWORD *)Editor::Instance() + 533) == 1 )
      {
        v8 = (struct Vector *)sub_1004C3D0(v37, 0);
        Terrain::EditTerrain(this, v8);
      }
      else if ( *((_DWORD *)Editor::Instance() + 533) == 2 )
      {
        v9 = (struct Vector *)sub_1004C3D0(v37, 0);
        Terrain::EditTexture(this, 2, v9);
      }
      else if ( *((_DWORD *)Editor::Instance() + 533) == 3 )
      {
        v10 = (struct Vector *)sub_1004C3D0(v37, 0);
        Terrain::EditSurface(this, v10);
      }
      goto LABEL_29;
    }
    if ( *((int *)this + 304) < 0 )
    {
LABEL_29:
      v38 = -1;
      CollisionInfo::~CollisionInfo((void **)v36);
      goto LABEL_30;
    }
    if ( *((_DWORD *)Editor::Instance() + 533) == 1 )
    {
      v26 = 0.0;
      v27 = 0.0;
      v28 = 0;
      v11 = *((_DWORD *)this + 303) / 64;
      v12 = *((_DWORD *)this + 305) / 64;
      LOBYTE(v38) = 1;
      if ( v11 <= v12 )
      {
        do
        {
          for ( i = *((_DWORD *)this + 302) / 64; i <= *((_DWORD *)this + 304) / 64; ++i )
          {
            Node = Terrain::FindNode(this, i, v11);
            v15 = Node;
            if ( Node )
            {
              v24 = (int)Node;
              std::vector<Actor *>::push_back(&v25, &v24);
              TerrainNode::Compile(v15, i, 1, 1);
            }
          }
          ++v11;
        }
        while ( v11 <= *((_DWORD *)this + 305) / 64 );
      }
      sub_10091B60(v33, &v25, 9);
      v16 = *((_DWORD *)this + 344);
      LOBYTE(v38) = 2;
      sub_1007FEC0(v35, v16, (_DWORD *)this + 302, (int)this + 1352);
      v17 = Editor::Instance();
      Editor::PushUndo(v17, (struct Editor::Undo *)v33);
      sub_1015DB70((_DWORD *)this + 338, (_DWORD *)this + 302);
      LOBYTE(v38) = 1;
      sub_1000F2E0((int)v33);
      v18 = &v25;
    }
    else
    {
      if ( *((_DWORD *)Editor::Instance() + 533) != 2 || !sub_1001A3D0((_DWORD *)this + 306) )
        goto LABEL_28;
      memset(&v30[1], 0, 12);
      LOBYTE(v38) = 3;
      v24 = (int)this;
      std::vector<Actor *>::push_back(v30, &v24);
      sub_10091B60(v33, v30, 8);
      LOBYTE(v38) = 4;
      v23 = sub_1016A1B0(0);
      v19 = sub_1016A1B0(0);
      sub_1007FC40(v34, *(_DWORD *)(v19 + 48), (_DWORD *)this + 302, v23);
      v20 = Editor::Instance();
      Editor::PushUndo(v20, (struct Editor::Undo *)v33);
      v21 = sub_1016A1B0(0);
      sub_1015DE80(v21, (const RECT *)((char *)this + 1208));
      LOBYTE(v38) = 3;
      sub_1000F2E0((int)v33);
      v18 = v30;
    }
    std::vector<AttributeRange>::_Tidy((int)v18);
LABEL_28:
    *((_DWORD *)this + 305) = -1;
    *((_DWORD *)this + 304) = -1;
    *((_DWORD *)this + 303) = 0x7FFFFFFF;
    *((_DWORD *)this + 302) = 0x7FFFFFFF;
    goto LABEL_29;
  }
LABEL_30:
  Actor::PostRender(this, a2);
}
