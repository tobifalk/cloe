# -*- coding: utf-8 -*-

# DO NOT EDIT THIS FILE!
# This file has been autogenerated by dephell <3
# https://github.com/dephell/dephell

try:
    from setuptools import setup
except ImportError:
    from distutils.core import setup

readme = ""

setup(
    long_description=readme,
    name="cloe-launch",
    version="0.18.0",
    description="Launch cloe-engine with Conan profiles.",
    python_requires="==3.*,>=3.6.0",
    author="Robert Bosch GmbH",
    author_email="cloe-dev@eclipse.org",
    license="Apache-2.0",
    keywords="cloe",
    entry_points={"console_scripts": ["cloe-launch = cloe_launch.__main__:main"]},
    packages=["cloe_launch"],
    package_dir={"": "."},
    package_data={},
    install_requires=["click==7.*,>=7.1.2", "toml==0.*,>=0.10.1"],
)