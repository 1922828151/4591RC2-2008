/*
 * func-name: ?CreateClipPlanes@Camera@@AAEXAAUFrustum@1@AAVMatrix@@@Z
 * func-address: 0x100635c0
 * callers: 0x10063820, 0x10063980, 0x10063d50
 * callees: none
 */

void __thiscall Camera::CreateClipPlanes(Camera *this, struct Camera::Frustum *a2, struct Matrix *a3)
{
  *(float *)a2 = -(*(float *)a3 + *((float *)a3 + 3));
  *((float *)a2 + 1) = -(*((float *)a3 + 7) + *((float *)a3 + 4));
  *((float *)a2 + 2) = -(*((float *)a3 + 11) + *((float *)a3 + 8));
  *((float *)a2 + 3) = -(*((float *)a3 + 15) + *((float *)a3 + 12));
  *((float *)a2 + 4) = -(*((float *)a3 + 3) - *(float *)a3);
  *((float *)a2 + 5) = -(*((float *)a3 + 7) - *((float *)a3 + 4));
  *((float *)a2 + 6) = -(*((float *)a3 + 11) - *((float *)a3 + 8));
  *((float *)a2 + 7) = -(*((float *)a3 + 15) - *((float *)a3 + 12));
  *((float *)a2 + 8) = -(*((float *)a3 + 3) - *((float *)a3 + 1));
  *((float *)a2 + 9) = -(*((float *)a3 + 7) - *((float *)a3 + 5));
  *((float *)a2 + 10) = -(*((float *)a3 + 11) - *((float *)a3 + 9));
  *((float *)a2 + 11) = -(*((float *)a3 + 15) - *((float *)a3 + 13));
  *((float *)a2 + 12) = -(*((float *)a3 + 1) + *((float *)a3 + 3));
  *((float *)a2 + 13) = -(*((float *)a3 + 7) + *((float *)a3 + 5));
  *((float *)a2 + 14) = -(*((float *)a3 + 11) + *((float *)a3 + 9));
  *((float *)a2 + 15) = -(*((float *)a3 + 15) + *((float *)a3 + 13));
  *((float *)a2 + 16) = -(*((float *)a3 + 2) + *((float *)a3 + 3));
  *((float *)a2 + 17) = -(*((float *)a3 + 7) + *((float *)a3 + 6));
  *((float *)a2 + 18) = -(*((float *)a3 + 11) + *((float *)a3 + 10));
  *((float *)a2 + 19) = -(*((float *)a3 + 15) + *((float *)a3 + 14));
  *((float *)a2 + 20) = -(*((float *)a3 + 3) - *((float *)a3 + 2));
  *((float *)a2 + 21) = -(*((float *)a3 + 7) - *((float *)a3 + 6));
  *((float *)a2 + 22) = -(*((float *)a3 + 11) - *((float *)a3 + 10));
  *((float *)a2 + 23) = -(*((float *)a3 + 15) - *((float *)a3 + 14));
}
