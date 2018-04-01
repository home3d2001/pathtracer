// Copyright 2018, Vahid Kazemi

#ifndef SCENE_H_
#define SCENE_H_

#include <vector>

#include "./geometry.h"
#include "./material.h"
#include "./ray.h"

struct Object {
  Geometry* geometry;
  Material* material;
};

class Scene {
 public:
  Scene() = default;

  void AddObject(const Object* obj);

  const Object* Trace(const Ray& ray, float start, float end,
                      TraceResult* result) const;

 private:
  std::vector<const Object*> objects_;
};

#endif  // SCENE_H_
