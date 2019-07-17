#!/bin/sh

git filter-branch -f --env-filter "
    GIT_AUTHOR_NAME='omegaBionic'
    GIT_AUTHOR_EMAIL='44264108+omegaBionic@users.noreply.github.com'
    GIT_COMMITTER_NAME='omegaBionic'
    GIT_COMMITTER_EMAIL='44264108+omegaBionic@users.noreply.github.com'
  " HEAD
