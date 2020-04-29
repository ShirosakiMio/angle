// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Context_gl_3_0_autogen.h: Creates a macro for interfaces in Context.

#ifndef ANGLE_CONTEXT_GL_3_0_AUTOGEN_H_
#define ANGLE_CONTEXT_GL_3_0_AUTOGEN_H_

#define ANGLE_GL_3_0_CONTEXT_API                                                               \
    void beginConditionalRender(GLuint id, GLenum mode);                                       \
    void clampColor(GLenum target, GLenum clamp);                                              \
    void endConditionalRender();                                                               \
    void framebufferTexture1D(GLenum target, GLenum attachment, TextureTarget textargetPacked, \
                              TextureID texturePacked, GLint level);                           \
    void vertexAttribI1i(AttributeLocation indexPacked, GLint x);                              \
    void vertexAttribI1iv(AttributeLocation indexPacked, const GLint *v);                      \
    void vertexAttribI1ui(AttributeLocation indexPacked, GLuint x);                            \
    void vertexAttribI1uiv(AttributeLocation indexPacked, const GLuint *v);                    \
    void vertexAttribI2i(AttributeLocation indexPacked, GLint x, GLint y);                     \
    void vertexAttribI2iv(AttributeLocation indexPacked, const GLint *v);                      \
    void vertexAttribI2ui(AttributeLocation indexPacked, GLuint x, GLuint y);                  \
    void vertexAttribI2uiv(AttributeLocation indexPacked, const GLuint *v);                    \
    void vertexAttribI3i(AttributeLocation indexPacked, GLint x, GLint y, GLint z);            \
    void vertexAttribI3iv(AttributeLocation indexPacked, const GLint *v);                      \
    void vertexAttribI3ui(AttributeLocation indexPacked, GLuint x, GLuint y, GLuint z);        \
    void vertexAttribI3uiv(AttributeLocation indexPacked, const GLuint *v);                    \
    void vertexAttribI4bv(GLuint index, const GLbyte *v);                                      \
    void vertexAttribI4sv(GLuint index, const GLshort *v);                                     \
    void vertexAttribI4ubv(GLuint index, const GLubyte *v);                                    \
    void vertexAttribI4usv(GLuint index, const GLushort *v);

#endif  // ANGLE_CONTEXT_API_3_0_AUTOGEN_H_
